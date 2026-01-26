#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>a(n);
        unordered_set<int>st;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
            sum+=a[i];
        }
        if(sum == s){
            cout<<"YES"<<endl;
            continue;
        }

        int dif=s-sum;
        if(dif < 0) {
            cout<<"NO"<<endl;
            continue;
        }
        if(dif % x == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}