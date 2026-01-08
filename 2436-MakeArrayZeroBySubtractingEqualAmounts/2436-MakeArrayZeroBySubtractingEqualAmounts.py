# Last updated: 8/1/2026, 5:22:49 pm
class Solution(object):
    def minimumOperations(self, nums):
        return len(set(nums) - {0})
