#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>dp(n,0);

        for(int i=0;i<n;i++){
            dp[i]=a[i];
        }
        for(int i=n-1;i>=0;i--){
            if(i+a[i]<=n-1){
                dp[i]=a[i]+dp[i+a[i]];
            }
        }
        int maxc=0;
        for(int i=0;i<n;i++){
            maxc=max(maxc,dp[i]);
        }
        cout<<maxc<<endl;
    }
}