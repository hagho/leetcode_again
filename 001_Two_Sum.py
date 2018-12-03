class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = dict()
        for idx, num in enumerate(nums):
            if target - num in d:
                return [d[target - num], idx]
            d[num] = idx
        return []