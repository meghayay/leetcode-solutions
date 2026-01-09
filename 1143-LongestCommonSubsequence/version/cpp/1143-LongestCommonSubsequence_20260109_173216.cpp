// Last updated: 9/1/2026, 5:32:16 pm
1class Solution {
2public:
3    int maxSumAfterPartitioning(vector<int>& arr, int k) {
4        
5
6        int n = arr.size();
7        vector<int>dp(n+1);
8        dp[0] = 0;
9        for(int i = 1; i<=n; i++){
10            int mx = 0;
11            for(int j = 1; j<=min(i,k); j++){
12                mx = max(mx, arr[i-j]);
13                int option = dp[i-j] + mx * j;
14                dp[i] = max(dp[i], option);
15            }
16        }
17        return dp[n];
18    }
19};