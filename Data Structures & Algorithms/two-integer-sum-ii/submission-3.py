class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        n = len(numbers);
        for i in range(0, n):
            diff = target - numbers[i]

            l = i + 1
            r = n - 1
            while l <= r:
                mid = l + (r - l)//2
                if numbers[mid] == diff:
                    return [i + 1, mid + 1]
                elif numbers[mid] < diff:
                    l = mid + 1
                else:
                    r = mid - 1
        return []