// Last updated: 9/1/2026, 1:51:05 pm
1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        /*
5        000
6        000
7
8        */
9        vector<vector<int>> dp(m+1,vector<int>(n+1));
10        dp[1][1] = 1;
11        for(int i = 1; i<=m; i++){
12            for(int j = 1; j<=n; j++){
13                if(i == 1 && j == 1)continue;
14                dp[i][j] = dp[i-1][j] + dp[i][j-1];
15
16            }
17        }
18        return dp[m][n];
19    }
20};