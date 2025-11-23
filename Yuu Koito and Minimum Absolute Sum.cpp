#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                cnt++;
            }
        }
        
        if(a[0] == -1 && a[n-1] == -1){
            for(int i=0;i<n;i++){
                if(a[i] == -1){
                    a[i]=0;
                }
            }
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

        else if(a[0] == -1 && a[n-1] != -1){
            a[0] = a[n-1];
            for(int i=0;i<n;i++){
                if(a[i] == -1){
                    a[i]=0;
                }
            }
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        
        else if(a[0] != -1 && a[n-1] == -1){
            a[n-1] = a[0];
            for(int i=0;i<n;i++){
                if(a[i] == -1){
                    a[i]=0;
                }
            }
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

        else if(a[0] != -1 && a[n-1] != -1){
            
            for(int i=0;i<n;i++){
                if(a[i] == -1){
                    a[i]=0;
                }
            }
            cout<<abs(a[0] - a[n-1])<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}