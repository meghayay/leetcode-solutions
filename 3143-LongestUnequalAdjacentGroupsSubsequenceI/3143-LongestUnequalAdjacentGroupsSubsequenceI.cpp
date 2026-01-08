// Last updated: 8/1/2026, 5:22:45 pm
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<string> res;
        if(n == 1) return words;
        
        res.push_back(words[0]);
        for(int i = 1; i < n; i++) {
            if(groups[i] != groups[i - 1]) {
                res.push_back(words[i]);
            }
        }
        return res;
    }
};