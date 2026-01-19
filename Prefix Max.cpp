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
       int maxc=0;
       for(int i=0;i<n;i++){
            cin>>a[i];
            maxc=max(maxc,a[i]);
       } 
       cout<<maxc*n<<endl;
    }
}