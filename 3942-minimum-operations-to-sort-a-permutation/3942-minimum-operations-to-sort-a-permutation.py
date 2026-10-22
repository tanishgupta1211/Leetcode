
class Solution:
    def minOperations(self, nums: List[int]) -> int:
        n = len(nums)
        zidx = nums.index(0)
        inc = all(nums[i] == (i - zidx + n) % n for i in range(n))
        dec = all(nums[i] == (zidx - i + n) % n for i in range(n))
        if not inc and not dec:
            return -1
        if inc:
            return min(zidx, n - zidx + 2)
        return min(n - zidx, zidx + 2)