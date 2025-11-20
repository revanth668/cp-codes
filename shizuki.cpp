#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            cout<<0<<endl;
            continue;
        }
        else{
            if(n%4==0){
                int temp = n/4;
                cout<<temp+1<<endl;
            }
            else{
                int temp = n/4;
                cout<<temp+1<<endl;
            }
        }

    }
}