#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int>a(n);
        vector<int>original(n);
        queue<int>q;
        for(int i=0;i<n;i++){
            cin>>a[i];
            original[i]=a[i];
        }
        vector<int>b(m);
        vector<int>c(m);
        //cout<<"helloe"<<endl;
        for(int i=0;i<m;i++){
            cin>>b[i]>>c[i];
        }
        //cout<<"hi"<<endl;
        for(int i=0;i<m;i++){
            a[b[i]-1]=a[b[i]-1]+c[i];
            q.push(b[i]-1);

            if(a[b[i]-1]>h){
                while(!q.empty()){
                    int top=q.front();
                    a[top]=original[top];
                    q.pop();
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}