#include<bits/stdc++.h>
using namespace std;

long long get(vector<int>&nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    return nums[n-1] + nums[n-2] - nums[0];
    
}
int main(){
    vector<int>nums{-2,0,5,-2,4};
    //string s = "aaabb";
    int n = 110;
    long long solve = get(nums);
    
    
    cout<<solve<<endl;
}