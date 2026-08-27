class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        mp = {}

        for i, num in enumerate(numbers):
            complement = target - num 

            if complement in mp:
                return [mp[complement], i + 1]

            mp[num] = i + 1
        
        return []