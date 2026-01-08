# Last updated: 8/1/2026, 5:23:08 pm
from sortedcontainers import SortedList

class Solution(object):
    def containsNearbyAlmostDuplicate(self, nums, indexDiff, valueDiff):
        if indexDiff <= 0 or valueDiff < 0:
            return False

        window = SortedList()
        
        for i in range(len(nums)):
            num = nums[i]

            # Find the smallest number >= nums[i] - valueDiff
            pos = window.bisect_left(num - valueDiff)

            # Check if such number exists and is within valueDiff
            if pos < len(window) and abs(window[pos] - num) <= valueDiff:
                return True

            # Add current number to window
            window.add(num)

            # Maintain sliding window of size indexDiff
            if i >= indexDiff:
                window.remove(nums[i - indexDiff])

        return False
