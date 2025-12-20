#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;

        if(b%l== 0){
            //return a;
            cout<<a<<endl;
            continue;
        }
        int maxv=0;
        for(int i=0;i<l;i++){
            int val=(a+b*i)%l;
            maxv=max(maxv,val);
        }

        cout<<maxv<<endl;
    }
}