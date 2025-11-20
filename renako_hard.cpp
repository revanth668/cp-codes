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
            cnta^=a[i];
        }
        int cntb=0;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            cntb^=b[i];
        }

        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if(cnta < cntb){
                    int tempa=cnta;
                    int tempb=cntb;
                    
                    tempa^=a[i];
                    tempb^=b[i];
                    tempa^=b[i];
                    tempb^=a[i];
                    if(tempa > tempb){
                        cnta=tempa;
                        cntb=tempb;
                    }
                }
            }
            else{
                if(cnta > cntb){
                    int tempa=cnta;
                    int tempb=cntb;
                    
                    tempa^=a[i];
                    tempb^=b[i];
                    tempa^=b[i];
                    tempb^=a[i];
                    if(tempa < tempb){
                        cnta=tempa;
                        cntb=tempb;
                    }
                }
            }
        }

        if(cnta > cntb){
            cout<<"Ajisai"<<endl;
        }
        else if(cnta < cntb){
            cout<<"Mai"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }


    }
}