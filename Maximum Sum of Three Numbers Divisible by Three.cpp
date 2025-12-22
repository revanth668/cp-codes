#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }

    vector<int>nums{1,1,4,6};
    if(nums.size()<3){
        cout<<0<<endl;
        return 0;
    }
    if(nums.size()==3){
        int sum=nums[0]+nums[1]+nums[2];
        if(sum%3){
            cout<<0<<endl;
        }
        else if(sum%3 == 0){
            cout<<sum<<endl;
        }
        return 0;
    }
    
    sort(nums.begin(),nums.end());
        queue<int>A;
        queue<int>B;
        queue<int>C;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3 == 0){
                A.push(nums[i]);
                if(A.size()>3){
                    A.pop();
                }
            }
            else if(nums[i]%3 == 1){
                B.push(nums[i]);
                if(B.size()>3){
                    B.pop();
                }
            }else if(nums[i]%3 == 2){
                C.push(nums[i]);
                if(C.size()>3){
                    C.pop();
                }
            }
        }
    
        int sum=0;
        int maxv=0;
        int maxa=0,maxb=0,maxc=0;
        bool flag=true;
        if(A.size()>0 && B.size()>0 && C.size()>0 ){
            flag=false;
        }
        bool ff = false;
        if(A.size()==3){
            ff=true;
        }
        while(A.size()>0){
            sum+=A.front();
            maxa=max(maxa,A.front());
            A.pop();
        }
        if(ff) maxv=max(maxv,sum);
        sum=0;
        ff=false;
        if(B.size()==3){
            ff=true;
        }
        while(B.size()>0){
            sum+=B.front();
            maxb=max(maxb,B.front());
            B.pop();
        }
        cout<<sum<<endl;
        if(ff) maxv=max(maxv,sum);
        sum=0;
        ff=false;
        if(C.size()==3){
            ff=true;
        }
        while(C.size()>0){
            sum+=C.front();
            maxc=max(maxc,C.front());
            C.pop();
        }
        if(ff) maxv=max(maxv,sum);
        if(!flag )
            maxv=max(maxv,(maxa+maxb+maxc));
        cout<<maxv<<endl;
        //return maxv;©leetcode
}