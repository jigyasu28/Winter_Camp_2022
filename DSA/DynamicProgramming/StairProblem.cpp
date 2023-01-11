#include<bits/stdc++.h>
using namespace std;

int32_t main(){
   // Code here.
   vector<int> h = {10, 10, 20, 30, 40, 10};
   int n=h.size();
   if(n==0)
     cout<<h[0]<<'\n';
   else if(n==1)
     cout<<min(h[0], h[1])<<'\n';
   else{
      vector<int> dp(n, 0);
      dp[0]=h[0];
      dp[1]=min(h[1], h[0]);
      for(int i=2;i<n;i++)
         dp[i]=min((abs(h[i]-h[i-1])+dp[i-1]), (abs(h[i]-h[i-2])+dp[i-2]));
      cout<<dp[n-1]<<'\n';
   }
   return 0;
}