#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int cnta=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 1){
                cnta++;
            }
        }
        int cntb=0;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i] == 1){
                cntb++;
            }
        }

        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if(cnta %2 ==0){
                    if(a[i] == 0 && b[i] == 1){
                        swap(a[i],b[i]);
                        cnta++;
                        cntb--;
                    }
                    else if(a[i] == 1 && b[i] == 0){
                        swap(a[i],b[i]);
                        cnta--;
                        cntb++;
                    }
                }
            }
            else{
                if(cntb %2 ==0){
                    if(b[i] == 0 && a[i] == 1){
                        swap(a[i],b[i]);
                        cnta--;
                        cntb++;
                    }
                    else if(b[i] == 1 && a[i] == 0){
                        swap(a[i],b[i]);
                        cnta++;
                        cntb--;
                    }
                }
            }
        }

        if(cnta%2 && cntb%2 == 0){
            cout<<"Ajisai"<<endl;
        }
        else if(cnta%2==0 && cntb%2){
            cout<<"Mai"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }


    }
}