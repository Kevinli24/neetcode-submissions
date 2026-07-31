from collections import defaultdict

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = defaultdict(int)
        ans = []

        for num in nums:
            freq[num] += 1

        freq_vals = list(freq.values())
        freq_keys = list(freq.keys())

        for i in range(0,k,1):
            key = freq_keys[freq_vals.index(max(freq_vals))]
            ans.append(key)
            freq_vals[freq_vals.index(max(freq_vals))] = 0

        return ans

