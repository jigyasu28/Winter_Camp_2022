#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n, edges, s=1;
   cin>>n>>edges;
   vector<vector<int>> adj[edges+1];
   for(int i=0;i<edges;i++){
      int n1, n2, val;
      cin>>n1>>n2>>val;
      adj[n1].push_back({n2, val});
      adj[n2].push_back({n1, val});
   }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(edges+1, 1e8);
    dist[s] = 0;
    pq.push({0, s});
    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (dist[adj[node][i][0]] > dis + adj[node][i][1])
            {
                dist[adj[node][i][0]] = dis + adj[node][i][1];
                pq.push(make_pair(dist[adj[node][i][0]], adj[node][i][0]));
            }
        }
    }
    cout<<"Distance of each node from source ";
    for(int i: dist)
      cout<<i<<" ";
    cout<<'\n';
    return 0;
}