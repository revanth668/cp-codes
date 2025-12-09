#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a){
    int n = a.size();
    vector<vector<int>>store(n);
    int temp=0;
    for(int i=0;i<n;i++){
        store[a[i] - 1].push_back(i);
        int size= store[a[i]-1].size();
        temp = max(temp, size);
    }

    if(temp <3){
        return -1;
    }
    int ans= INT_MAX;
    if(temp == 3){
        for(int i=0;i<n;i++){
            if(store[i].size() == 3){
                int distance = abs(store[i][0] - store[i][1]) + abs(store[i][0] - store[i][2])+ abs(store[i][1] - store[i][2]);
                ans= min(ans, distance);
            }
        }
    }

    if(temp > 3){
        for(int i=0;i<n;i++){
            
            if(store[i].size() >= 3){
                vector<int>copy{store[i].begin(),store[i].end()};

                for(int i=0;i<copy.size();i++){
                    for(int j=i+1;j<copy.size();j++){
                        for(int k=j+1;k<copy.size();k++){
                            int distance= abs(copy[i] - copy[j]) + abs(copy[j] - copy[k]) + abs(copy[k] - copy[i]);
                            ans = min(ans, distance);
                        }
                    }
                }
            }
        }
    }
    return ans;

}

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
        long long  res;
        res=solve(a);

        cout<<res<<endl;
    }
}