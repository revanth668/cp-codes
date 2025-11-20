#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&a){
    int minn=INT_MAX;
    int maxm=INT_MIN;

    for(int i=0;i<a.size();i++){
        if(minn > a[i]){
            minn=a[i];
        }
        if(maxm < a[i]){
            maxm=a[i];
        }
    }

    vector<int>dp(maxm - minn+1 ,0);
    for(int i=0;i<a.size();i++){
        dp[a[i]-minn]=1;
    }

    vector<int>ans;
    for(int i=0;i<dp.size();i++){
        if(!dp[i]){
            ans.push_back(minn + i);
        }
    }

    return ans;
}
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
        vector<int>res;
        res=solve(a);

        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}