#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// bool check(unordered_map<char,int>&mpp){
//     int cnt=0;
//     for(int i=0;i<mpp.size()-1;i++){
//         if()
//     }
// }
int main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    unordered_map<char,int>mpp;
    string s="aabaac";
    vector<int>cost{1,2,3,4,1,10};
    int n=cost.size();
    int maxc=0;
    int total=0;
    for(int i=0;i<n;i++){
        mpp[s[i]]+=cost[i];
        int val=mpp[s[i]];
        maxc=max(maxc,val);
        total+=cost[i];
    }
    //bool flag=check(mpp);
    if(mpp.size() == 1){
        cout<<0<<endl;
        return 0;
    }
    cout<<total-maxc<<endl;

}