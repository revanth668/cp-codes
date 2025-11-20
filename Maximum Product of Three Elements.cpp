#include<bits/stdc++.h>
using namespace std;

long long solve(vector<int>&a){
    int count0 = 0;
        int countneg = 0;
        for(int i=0;i<a.size();i++){
            if(a[i] == 0){
                count0++;
            }
            if(a[i] < 0){
                countneg++;
            }
        }
    
        if(count0 > 1 && a.size() == 3){
            return 0;
        }
        if(count0 >= a.size()-1) return 0;
    
        sort(a.begin(),a.end());
        long long ans=1;
        
        if(a[0]>= 0 && a.back() >0){
            //if(a[0] == 100000 && a[1] == 100000) return 100000;
            ans=(long long)a[a.size()-1] * (long long)a[a.size()-2] * 100000;
        }
        else if(a[0] < 0 && a.back()<0){
            //if(a[0] == -100000 && a[1] == -100000) return 100000;
            ans=(long long)a[0]* (long long)a[1];
            if(ans>0){
                ans=ans*100000;
            }
            else{
                ans=ans*100000;
                ans=ans*-1;
            }
        }
        else if(a[0]<0 && a.back()>=0){
            if(a.size() == 3){
                //ans=(long long)a[0]*(long long)a.back();
                int maxx= 1;
                int smax=1;

                if(abs(a[0]) > a.back()){
                    maxx=a[0];
                    smax= max(a.back(), abs(a[1]));
                    
                }
                else{
                    maxx=a.back();
                    smax=max(abs(a[0]),abs(a[1]));
                }
                ans=(long long)maxx*(long long)smax;
                
                if(ans>0){
                    ans=ans*100000;
                }
                else{
                    ans=ans*100000;
                    ans=ans*-1;
                }
            }
            else{
                int maxx= 1;
                int smax= 1;
    
                if(abs(a[0]) > abs(a.back())){
                    maxx=a[0];
                    smax=max(abs(a[1]),max(abs(a.back()),abs(a[a.size()-2])));
                }
                else{
                    maxx=a.back();
                    smax=max(abs(a[1]),max(abs(a[0]),abs(a[a.size()-2])));
                }
                ans=(long long)maxx*(long long)smax;
                 if(ans>0){
                    ans=ans*100000;
                }
                else{
                    ans=ans*100000;
                    ans=ans*-1;
                }
            }
    
        }
        return ans;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long  res;
        res=solve(a);

        cout<<res<<endl;
    }
}