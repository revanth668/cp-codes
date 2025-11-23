#include<bits/stdc++.h>
using namespace std;

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

        bool possible = false;

        int x,y;
        for(int i=0;i<n;i++){
            x=a[i];
            
            for(int j=i+1;j<n;j++){
                y=a[j];
                int temp = y%x;
                if(temp %2 == 0){
                    possible=true;
                    break;
                }
            }
            if(possible){
                break;
            }
        }

        if(possible){
            cout<<x <<" "<< y<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}