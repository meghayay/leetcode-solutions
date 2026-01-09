// Last updated: 9/1/2026, 5:59:19 pm
1class Solution {
2public:
3    bool canPartition(vector<int>& nums) {
4        int sum = 0;
5        for(int nxt: nums){
6
7            sum+= nxt;
8        }
9        int n = nums.size();
10        if(sum%2 == 1){
11            return false;
12        }
13        vector<vector<bool>>dp(n+1,vector<bool>(sum/2+1));
14        dp[0][0] = true;
15        for(int i = 1; i<=n; i++){
16            for(int j = 0; j<= sum/2; j++){
17                if(dp[i-1][j]){
18                    dp[i][j] = true;
19                }
20                if(j >= nums[i-1] && dp[i-1][j-nums[i-1]]){
21                    dp[i][j] = true;
22
23                }
24
25            }
26        }
27        return dp[n][sum/2];
28        
29        
30    }
31};