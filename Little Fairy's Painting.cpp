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
        set<int>st{a.begin(),a.end()};
        int size=st.size();
        if(st.find(size)!=st.end()){
            cout<<size<<endl;
        }
        else{
            while(size<=1000){
                size++;
                if(st.find(size) != st.end()){
                    break;
                }
            }
            cout<<size<<endl;
        }
    }
}