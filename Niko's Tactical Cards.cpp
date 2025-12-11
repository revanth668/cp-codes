#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        // Track both maximum and minimum possible scores
        ll maxScore = 0, minScore = 0;
        
        for(int i=0;i<n;i++){
            // Calculate all possibilities for this turn
            ll chooseRed_fromMax = maxScore - a[i];
            ll chooseRed_fromMin = minScore - a[i];
            ll chooseBlue_fromMax = b[i] - maxScore;
            ll chooseBlue_fromMin = b[i] - minScore;
            
            // Update max and min for next turn
            ll newMax = max({chooseRed_fromMax, chooseRed_fromMin, 
                            chooseBlue_fromMax, chooseBlue_fromMin});
            ll newMin = min({chooseRed_fromMax, chooseRed_fromMin, 
                            chooseBlue_fromMax, chooseBlue_fromMin});
            
            maxScore = newMax;
            minScore = newMin;
        }
        
        cout<<maxScore<<endl;
    }
}