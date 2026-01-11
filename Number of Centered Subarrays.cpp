#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    vector<int>nums={2,-3};
    int ans=0;
    for(int i=0;i<nums.size();i++){
        unordered_map<int,int>mpp;
        int sum=0;
        //cout<<"hi"<<endl;
        for(int j=i;j<nums.size();j++){
            mpp[nums[j]]++;
            sum+=nums[j];
            if(mpp.find(sum)!=mpp.end()){
                ans++;
            }
        }
    }

    cout<<ans<<endl;

}