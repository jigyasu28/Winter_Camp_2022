#include<bits/stdc++.h>
using namespace std;

void makeGraph(vector<pair<int, int>> list, vector<vector<int>>& matrix){
    for(auto it: list){
        matrix[it.first].push_back(it.second);
        matrix[it.second].push_back(it.first);
    }
}

int32_t main(){
   // Code here.
   vector<vector<int>> matrix(7);
   vector<pair<int, int>> list={{1, 2}, {1, 4}, {1, 6}, {2, 3}, {3, 5}, {3, 6}, {4, 5}};
   makeGraph(list, matrix);
   cout<<"First Degree\n";
   for(int i=1;i<matrix.size();i++){
      cout<<i<<": ";
      for(auto itr: matrix[i])
        cout<<itr<<" ";
      cout<<'\n';
   }
   cout<<"Second Degree\n";
   for(int i=1;i<matrix.size();i++){
      cout<<i<<": ";
      vector<bool> visited(matrix.size()+1, false);
      for(auto it: matrix[i]){
          for(auto itr: matrix[it]){
              if(!visited[itr] && itr!=i){
                  visited[itr]=true;
                  cout<<itr<<" ";
              }
          }
      }
      cout<<'\n';
   }
   return 0;
}












//    matrix[1].push_back(2);
//    matrix[1].push_back(4);
//    matrix[1].push_back(6);
//    matrix[2].push_back(1);
//    matrix[2].push_back(3);
//    matrix[3].push_back(2);
//    matrix[3].push_back(6);
//    matrix[3].push_back(5);
//    matrix[6].push_back(1);
//    matrix[6].push_back(3);
//    matrix[5].push_back(3);
//    matrix[5].push_back(4);
//    matrix[4].push_back(5);
//    matrix[4].push_back(1);