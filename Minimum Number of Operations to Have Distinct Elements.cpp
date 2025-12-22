#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    vector<int>nums{100,4,13,12,92,25,23,63,38,82,15,19,74,85,56,13,13};
    int n=nums.size();
    unordered_map<int,int>mpp;
    queue<int>q;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        q.push(nums[i]);
    }
    int unique=mpp.size();
    //cout<<unique<<endl;
    if(unique == n){
        cout<<0<<endl;
        return 0;
    }
    int cnt=0;
    while(q.size()>=3 && unique != q.size()){
        //cout<<"hello"<<endl;
        for(int j=0;j<3;j++){
            int val=q.front();
            q.pop();
            mpp[val]--;
            if(mpp[val] == 0) unique--;
        }
        cnt++;
        cout<<cnt<<endl;
        
    }
    if(q.size()<3 && unique != q.size()){
        cnt++;
    }
    cout<<cnt<<endl;

}