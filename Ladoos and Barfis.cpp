#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>t(n);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }

    int ans = 0;
    int i = 0;
    
    while(i < n){
        int type1 = t[i];
        int cnt1 = 0;
        
        while(i < n && t[i] == type1){
            cnt1++;
            i++;
        }

        if(i < n){
            int type2 = t[i];
            int cnt2 = 0;
            
            int j = i;
            while(j < n && t[j] == type2){
                cnt2++;
                j++;
            }
            
            int len = 2 * min(cnt1, cnt2);
            ans = max(ans, len);
            
        }
    }
    cout<<ans<<endl;
}