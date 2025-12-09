#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a){
    int ans=INT_MAX;
        int n = a.size();
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<n;j++){
                if(a[j] == a[i]){
                    for(int k=j+1;k<n;k++){
                        if(a[k] == a[j]){
                            int distance= abs(i - j) + abs(j - k) + abs(k - i);
                            ans = min(ans, distance);
                        }
                    }
                }
            }
        }
    
        if(ans== INT_MAX){
            ans=-1;
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
        long long  res;
        res=solve(a);

        cout<<res<<endl;
    }
}