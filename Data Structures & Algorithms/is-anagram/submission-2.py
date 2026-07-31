class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        countS = {}
        countT = {}
        length1 = len(s)
        length2 = len(t)
        if length1 != length2:
            return False

        for i in range(length1):
            countS[s[i]] = countS.get(s[i], 0) + 1
            countT[t[i]] = countT.get(t[i], 0) + 1

        if countS == countT:
            return True
        else:
            return False
