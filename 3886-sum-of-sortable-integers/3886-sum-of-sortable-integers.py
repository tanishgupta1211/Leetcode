class Solution:
    def sortableIntegers(self, nums: list[int]) -> int:
        n = len(nums)
        target = sorted(nums)
        ans = 0
        for k in range(1, n + 1):
            if n % k != 0:
                continue
            valid = True
            for start in range(0, n, k):
                block = nums[start:start + k]
                cnt = 0
                for j in range(k):
                    nxt = (j + 1) % k
                    if block[j] > block[nxt]:
                        cnt += 1
                if cnt > 1:
                    valid = False
                    break
                if sorted(block) != target[start:start + k]:
                    valid = False
                    break
            if valid:
                ans += k
        return ans