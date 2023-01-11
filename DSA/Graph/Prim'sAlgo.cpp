// Prim's Algorithm

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
   // Code here.
   int n, edges;
   cin>>n>>edges;
   vector<vector<pair<int, int>>> matrix(n+1);
   for(int i=0;i<edges;i++){
      int n1, n2, val;
      cin>>n1>>n2>>val;
      matrix[n1].push_back({n2, val});
      matrix[n2].push_back({n1, val});
   }
   int minCost=0, vertex=1, loop=true; // Initially select a vertex --> Node 1.
   vector<bool> visited(n+1, false);
   visited[vertex]=true;
   while(loop){
      int minimum=INT_MAX, node=-1;
       for(int i=0;i<n;i++){
        if(visited[i]){
          for(auto it: matrix[i]){
              if(!visited[it.first] && it.second<minimum){
                 minimum=it.second;
                 node=it.first;
              }
          }
       }
     }
      if(node==-1){
         loop=false;
      }
      else{
        visited[node]=true;
        minCost+=minimum;
      }
   }
   cout<<minCost<<'\n';
   return 0;
}