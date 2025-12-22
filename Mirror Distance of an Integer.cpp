#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    int n=7;
    string s=to_string(n);
    reverse(s.begin(),s.end());
    int rev=stoi(s);
    cout<<abs(n-rev)<<endl;
}