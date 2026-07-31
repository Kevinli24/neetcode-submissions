class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        array = list(s)
        dic = {')':'(','}':'{',']':'['}
        for i in range(len(array)):
            if array[i] in dic:
                if len(stack) == 0:
                    return False
                if (stack[-1] == dic[array[i]]):
                    stack.pop()
                else:
                    return False
            else:
                stack.append(array[i])
                

        if (len(stack) == 0):
            return True
        else:
            return False
        