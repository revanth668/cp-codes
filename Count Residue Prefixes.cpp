#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    string s="dod";

    int cnt=0;
    //for(int i=0;i<s.size();i++){
        unordered_map<char,int>mpp;
        for(int j=0;j<s.size();j++){
            mpp[s[j]]++;
            if(mpp.size() == (j+1)%3){
                cnt++;
            }else if(mpp.size()>2){
                break;
            }
        }
    //}

    cout<<cnt<<endl;
}