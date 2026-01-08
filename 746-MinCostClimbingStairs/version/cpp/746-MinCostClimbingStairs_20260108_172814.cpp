// Last updated: 8/1/2026, 5:28:14 pm
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) {
4      int n = cost.size();  
5      vector<int>dp(n+1);
6      dp[0]=0;
7      dp[1]=0;
8      for(int i = 2; i<=n ; i++){
9        int option1 = dp[i-1] + cost[i-1];
10        int option2 = dp[i-2] + cost[i-2];
11        dp[i] = min(option1, option2);
12
13      } 
14      return dp[n]; 
15    }
16};