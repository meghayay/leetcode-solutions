// Last updated: 9/1/2026, 3:21:01 pm
1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4        
5        /* 
6        consider the last letter 
7        abcd
8        acbd
9
10        common subsequence
11        abc
12        acb
13
14        add d to subsequence
15        add one to length
16
17        2nd opton: dont include last char of first string 
18        abc
19        acbd
20
21        3rd option exclude last charac of 2nd string
22        abcd
23        acb
24    
25        N = len of text1;  M = len of text2
26        N * M
27        */
28        int n = text1.size();
29        int m = text2.size();
30        vector<vector<int>>dp(n+1,vector<int>(m+1));
31
32        for(int i = 1; i<=n; i++){
33            for(int j = 1; j<=m; j++){
34                if(text1[i-1] == text2[j-1]){
35                    dp[i][j] = dp[i-1][j-1] + 1;
36                
37                }
38                dp[i][j] = max(dp[i][j], dp[i-1][j]);
39                dp[i][j] = max(dp[i][j], dp[i][j-1]);
40
41            }
42        }
43        return dp[n][m];
44        
45    }
46};