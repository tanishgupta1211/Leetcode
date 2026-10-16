
class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        mod = 10**9 + 7
        n = len(nums)
        tree = [0] * (4 * n)
        sq = [0] * (4 * n)
        lazy = [0] * (4 * n)
        
        def push(node, l, r):
            if lazy[node] == 0:
                return
            x = lazy[node]
            length = r - l + 1
            old_sum = tree[node]
            sq[node] = (sq[node] + 2 * x * old_sum + x * x * length) % mod
            tree[node] = (old_sum + x * length) % mod
            if l != r:
                lazy[node * 2] += x
                lazy[node * 2 + 1] += x
            lazy[node] = 0

        def update(node, l, r, ql, qr):
            push(node, l, r)
            if r < ql or l > qr:
                return
            if ql <= l and r <= qr:
                lazy[node] += 1
                push(node, l, r)
                return
            mid = (l + r) // 2
            update(node * 2, l, mid, ql, qr)
            update(node * 2 + 1, mid + 1, r, ql, qr)
            tree[node] = (tree[node * 2] + tree[node * 2 + 1]) % mod
            sq[node] = (sq[node * 2] + sq[node * 2 + 1]) % mod

        last = {}
        ans = 0
        for r, num in enumerate(nums):
            p = last.get(num, -1)
            update(1, 0, n - 1, p + 1, r)
            ans = (ans + sq[1]) % mod
            last[num] = r
        return ans