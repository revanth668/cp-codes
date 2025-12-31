#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<ll>dp(n+1,0);
    ll base= 1e9 +7;
    dp[0]=1;
    
    for(int i=1;i<=n;i++){  
        
        if(i>=2 && s[i-1]=='n' && s[i-2] == 'n'){
            dp[i]=(dp[i-1]+dp[i-2])%base;  
        }else if(i>=2 && s[i-1]=='u' && s[i-2] == 'u'){
            dp[i]=(dp[i-1]+dp[i-2])%base;  
        }else if(s[i-1]=='m' || s[i-1]=='w'){
            cout<<0<<endl;
            return 0;
        }
        else{
            dp[i]=dp[i-1];
        }
    }
    cout<<dp[n]<<endl;
}