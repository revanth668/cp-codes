#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int k=a[0];
        int target=a[1];

        // below code is brute force
        // optimal approach is to check is (target - x)%x == a[0]
        for(int i=a[0]+1;i<=target;i++){
            bool flag=false;
            for(int x=i;x<=target;x++){
                if(target%x == a[0]){
                    flag=true;
                    //cout<<target<<" "<<x<<endl;
                    break;
                }
            }
            if(!flag){
                break;
            }else{
                k++;
            }
        }
        cout<<k<<endl;

    }
}