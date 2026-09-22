class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # memoization 
        dp = [0]*len(nums)
        
        dp[0] = nums[0]
        
        for i in range(1, len(nums)):
            option1 = nums[i]
            option2 = nums[i] + dp[i-1]

            dp[i] = max(option1, option2)
        
        return max(dp)