#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        string s=a[0];

        for(int i=1;i<n;i++){
            if(a[i]+s > s+a[i]){
                s+=a[i];
                //cout<<s<<endl;
            }else{
                s=a[i]+s;
            }
        }

        cout<<s<<endl;
    }
}