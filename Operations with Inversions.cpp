#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
         int count=0;
         vector<int>cnt(n,0);
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    cnt[j]++;
                }
            }
         }
         for(int i=0;i<n;i++){
            if(cnt[i]>0){
                count++;
            }
         }
         cout<<count<<endl;
    }
}