#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=n;
        vector<ll>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_set<ll>s(a.begin(),a.end());
        int best=0;
        for(ll x:s){
            if(s.find(x-1)==s.end()){
                ll cur=x;
                int len=1;
                while(s.find(cur+1)!=s.end()){
                    cur++;
                    len++;
                }
                best=max(best,len);
            }
        }
        
        cout<<best<<endl;

    }
}