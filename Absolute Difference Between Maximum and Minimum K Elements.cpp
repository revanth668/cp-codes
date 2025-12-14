#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums{5,2,2,4};
    int k=2;
    sort(nums.begin(),nums.end());
    int small=0;
    for(int i=0;i<k;i++){
        small+=nums[i];
    }

    int large=0;
    int n=nums.size();
    for(int i=n-k;i<n;i++){
        large+=nums[i];
    }
    //cout<<small<<" "<<large<<endl;
    cout<<abs(large-small)<<endl;
}