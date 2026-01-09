// Last updated: 9/1/2026, 5:02:11 pm
1class Solution {
2public:
3
4    int dp[1000][1000];
5    string str;
6    int solve(int l, int r){
7        if(l ==r + 1){
8            return 0;
9        }
10        if(l == r){
11            return 1;
12        }
13        if(dp[l][r] > 0){
14            return dp[l][r];
15        }
16        if(str[l] == str[r]){
17            dp[l][r] = solve(l+1, r-1) + 2;
18        }
19        dp[l][r] = max(dp[l][r], solve(l+1,r));
20        dp[l][r] = max(dp[l][r], solve(l,r-1));
21        return dp[l][r];
22    }
23    int longestPalindromeSubseq(string s) {
24        str = s;
25        return solve(0,(int)s.size()-1);
26        
27        /*
28            "bbbab"
29            "cbbd"
30            "p"
31            "racecarracecarracecarracecarracecar"
32            "girafarig"
33            "azertyuiopqsdfghjklmwxcvbn"
34
35            add ab in front and ab at back
36            exclude first character or
37            exclude the last character
38
39            o(N^2)
40            substring from l to r dp[l][r]
41
42            base case:
43            "" -> 0
44            "a" -> 1
45            TOP DOWN APPROACH RECURSIVELY>
46        */
47
48
49
50
51
52
53
54
55    }
56};