class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = list(s.lower())
        filtered = [item for item in s if item.isalnum()]
        print(filtered)

        if len(filtered) == 0:
            return True

        start = 0
        end = len(filtered) - 1

        while start <= (int(len(filtered)/2) - 1):
            if filtered[start] != filtered[end]:
                return False
            start += 1
            end -= 1
        
        return True
