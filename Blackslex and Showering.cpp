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
        int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //total+=a[i];
        }
        for(int i=0;i<n-1;i++){
            total+=abs(a[i]-a[i+1]);
        }
        int red=0;
        red=max(abs(a[0]-a[1]),red);
        red=max(abs(a[n-1]-a[n-2]),red);

        for(int i=1;i<n-1;i++){
            red=max(  red,( abs(a[i]-a[i-1]) + abs(a[i]-a[i+1]) - abs(a[i-1]-a[i+1] ) ));
        }    
        cout<<total-red<<endl;    
        
    }
}