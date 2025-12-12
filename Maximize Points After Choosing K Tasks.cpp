#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comparator(pair<int,int> a,pair<int,int> b){
        // if(a.first > a.second) return true;
        // else if(b.first > b.second) return true;
        // else if(a.first > b.first) return true;
        // else if(a.second < b.second) return true;
        // return false;

        
        // We want pairs where technique1 is large and technique2 is small
        // This is maximized when (technique1 - technique2) is largest
        int diff_a = a.first - a.second;  // technique1[i] - technique2[i]
        int diff_b = b.first - b.second;
        return diff_a > diff_b;  // Sort by difference in descending order
    }
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        vector<pair<int,int>>pairs;
        int n=technique1.size();
        for(int i=0;i<n;i++){
            pairs.push_back({ technique1[i],technique2[i]});
        }
        sort(pairs.begin(),pairs.end(),comparator);
        
        long long maxpo = 0;  // Changed to long long to match return type
        
        // First k tasks use technique1
        for(int i = 0; i < k; i++){
            maxpo += pairs[i].first;
        }
        
        // Remaining tasks use the better option
        for(int i = k; i < n; i++){
            maxpo += max(pairs[i].first, pairs[i].second);
        }


        return maxpo;
    }

};