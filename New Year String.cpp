#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check2026(string s){
    for(int i=0;i<s.size();i++){
        if(i<=s.size()-4){
            string str=s.substr(i,4);
            if(str=="2026"){
                return true;
            }
        }
    }
    return false;
}
bool check2025(string s){
    for(int i=0;i<s.size();i++){
        if(i<=s.size()-4){
            string str=s.substr(i,4);
            if(str=="2025"){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n<3){
            cout<<0<<endl;
        }
        bool flag=check2025(s);
        if(!flag) cout<<0<<endl;
        else if(check2026(s)){
            cout<<0<<endl;
        }
        else cout<<1<<endl;
    }
}