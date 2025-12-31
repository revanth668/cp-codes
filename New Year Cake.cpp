#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// ll solve(ll a,ll b){
//     ll i=0;
//     if(b%2==0){
//         //even means start with a
//         while((i%2==0 && a>0 ) || ( i%2==1 && b>0)){
//             if(i%2==0){
//                 //i==0, cut a
//                 int dif=(1LL << i);
//                 if(a>=dif){
//                     a-=dif;
//                     i++;
//                 }else{
//                     break;
//                 }
//             }else{
//                 int dif=(1LL << i);
//                 if(b>=dif) {
//                     b-=dif;
//                     i++;
//                 }else{
//                     break;
//                 }
                
//             }
//         }
//     }
//     else{
//         while((i%2==0 && b>0 ) || ( i%2==1 && a>0)){
//             if(i%2==0){
//                 //i ==0 , cut b
//                 int dif=(1LL << i);
//                 if(b>=dif) {
//                     b-=dif;
//                     i++;
//                 }else{
//                     break;
//                 }
//             }else{
//                 int dif=(1LL << i);
//                 if(a>=dif){
//                     a-=dif;
//                     i++;
//                 }else{
//                     break;
//                 }
//             }
//             //cout<<"hi"<<endl;
//         }
//     }
 
//     return i;
// }
// solve by bs

ll p4(ll n){
    ll res=1;
    for(ll i=0;i<n;i++){
        res *= 4;
        if(res>2e6) return res;
    }

    return res;
}
ll sumeven(ll n){
    ll k = n/2;
    if(k==0) return 0;
    return 2*(p4(k)-1)/3;
}

ll sumedd(ll n){
    ll k = (n+1)/2;
    if(k==0) return 0;
    return (p4(k)-1)/3;
}
bool can(ll mid,ll a,ll b){
    ll odd = sumedd(mid);
    ll even = sumeven(mid);

    return (odd <= a && even <= b) || (odd <= b && even <=a);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        
        ll left=1,right=40;
        ll ans=0;//nothing cant make
        while(left<=right){
            int mid=(left+right)/2;
            if(can(mid,a,b)){//search for bigger one
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        cout<<ans<<endl; 
    }
}