class MinStack:

    def __init__(self):
        self.stack = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        
    def pop(self) -> None:
        del self.stack[-1]

    def top(self) -> int:
        top = self.stack[-1]
        return top
    
    def getMin(self) -> int:
        minelement = min(self.stack)
        return minelement
        
