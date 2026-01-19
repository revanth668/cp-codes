#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>res;
        for(int i=1;i<=n;i++){
            res.push_back(i);
        }
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";

        }
        cout<<endl;
    }
}