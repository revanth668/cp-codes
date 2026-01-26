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
        vector<int>b;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mpp[a[i]]=i;
            b.push_back(a[i]);
        }

        vector<int>maxia(n,0);
        maxia[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            maxia[i]=max(a[i],maxia[i+1]);
        }

        for(int i=0;i<n;i++){
            if(maxia[i]>a[i]){
                //swap(a[i],a[mpp[maxia[i]]]);
                int start=i;
                int itr=start;
                int end=mpp[maxia[i]];
                for(int j=end;j>=start;j--){
                    a[j]=b[itr];
                    itr++;
                }
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}