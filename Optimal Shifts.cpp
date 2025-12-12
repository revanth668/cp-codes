#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;

        // ll count=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='1'){
        //         count++;
        //     }
        // }

        // if(count == n){
        //     cout<<0<<endl;
        //     continue;
        // }
        // vector<int>st(n,0);
        // for(ll i=0;i<n;i++){
        //     if(s[i]=='1') st[i]=1;
        // }
        // for(ll d=1;d<n ;d++){
        //     //int cnt=count;
        //     string temp="";
        //     for(ll i=n-d;i<n;i++){
        //         temp+=s[i];
        //     }
        //     for(ll i=0;i<n-d;i++){
        //         temp+=s[i];
        //     }

        //     for(ll i=0;i<n;i++){
        //         if(temp[i]=='1' && st[i]!=1){
        //             count++;
        //             st[i]=1;
        //         }
        //     }

        //     if(count == n){
        //         cout<<d<<endl;
        //         break;
        //     }
        //}

        int first=-1,second=-1;
        s+=s;
        n+=n;

        int maxs=INT_MIN;
        for(int i=0;i<n;i++){
            int dist=0;
            if(s[i] == '1'){
                if(first == -1){
                    first=i;
                }
                if(second == -1 && first != -1){
                    second=i;
                    dist=abs(second - first ) -1;
                }
                else if(first != -1 && second != -1){
                    second=first;
                    first=i;
                    dist=abs(second - first )-1;
                }
            }
            maxs=max(maxs,dist);
        }

        cout<<maxs<<endl;

    }
}