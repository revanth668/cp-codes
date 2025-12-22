#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    vector<int>nums{8,1,7,1,3,7,5,6,10,10};
    string s="0010111000";
    // long long sum=0;
    // sort(nums.begin(),nums.end());
    //     int cnt=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(s[i]=='1') cnt++;
    //     }
    //     for(int i=0;i<cnt;i++){
    //         sum+=nums[nums.size()-(1+cnt)];
    //     }
    //     cout<<sum<<endl;
    long long n=nums.size();
    long long sum=0;
    priority_queue<long long> pq; 
    for(long long i=0;i<n;i++){
        if(pq.empty() && s[i]=='1'){
            sum+=nums[i];
        }else if(!pq.empty()){
            if(s[i]=='1'){
                pq.push(nums[i]);
                sum+=pq.top();
                pq.pop();
            }else{
                pq.push(nums[i]);
            }
        }else if(pq.empty() && s[i]=='0'){
            pq.push(nums[i]);
        }
    }

    cout<< sum<<endl;
}