#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int count=0;
        int temp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1' || temp>0){
                if(s[i]=='1'){
                    temp=k;
                }else{
                    temp--;
                }
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
}