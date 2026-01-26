#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        vector<int>original(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            original[i]=a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            //a[i]=max(a[i],b[i]); 
        }
        //cout<<"hi"<<endl;
        a[n-1]=max(a[n-1],b[n-1]);
        for(int i=n-2;i>=0;i--){
            a[i]=max(a[i+1],max(a[i],b[i]));
        }
        vector<ll>prefix(n,0);
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        //cout<<"hei"<<endl;
        vector<ll>res;
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;

            l--;
            r--;
            ll sum = prefix[r];
            if(l > 0) sum -= prefix[l-1];
            res.push_back(sum);
        }

        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;

    }
}