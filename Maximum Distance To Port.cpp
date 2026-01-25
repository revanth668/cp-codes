#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<vector<int>>a(k);
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            a[val-1].push_back(i);
        }
        vector<pair<int,int>>edges;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            edges.push_back({u-1,v-1});
        }
        //cout<<"hi"<<endl;
        vector<vector<int>>adj(n);
        for(auto it:edges){
            adj[it.first].push_back(it.second);
            adj[it.second].push_back(it.first);
        }

        vector<int>dis(n,INT_MAX);
        dis[0]=0;
        //cout<<"hello"<<endl;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto it = pq.top(); pq.pop();
            int dist = it.first;
            int u = it.second;

            if(dist > dis[u]) continue;

            for(auto v : adj[u]){
                if(dist + 1 < dis[v]){
                    dis[v] = dist + 1;
                    pq.push({dis[v], v});
                }
            }
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            int dist=INT_MIN;
            for(auto it:a[i]){
                dist=max(dist,dis[it]);
            }
            ans.push_back(dist);
        }

        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    
}