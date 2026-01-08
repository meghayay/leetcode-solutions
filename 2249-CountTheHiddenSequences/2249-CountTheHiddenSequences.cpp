// Last updated: 8/1/2026, 5:22:52 pm
class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long prefixSum = 0;
        long maxPrefix = 0, minPrefix = 0;

        for (int diff : differences) {
            prefixSum += diff;
            maxPrefix = max(maxPrefix, prefixSum);
            minPrefix = min(minPrefix, prefixSum);
        }

        // Calculate number of valid starting values
        long range = (upper - lower);
        long requiredRange = maxPrefix - minPrefix;

        long result = range - requiredRange + 1;
        return result > 0 ? result : 0;
    }
};
