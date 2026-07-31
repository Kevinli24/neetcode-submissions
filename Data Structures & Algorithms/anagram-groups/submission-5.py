from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        groups = defaultdict(list)

        for word in strs:
            alpha = [0] * 26

            for c in word:
                index = ord(c) - ord('a')
                alpha[index] += 1

            key = tuple(alpha)
            groups[key].append(word)

        return list(groups.values())