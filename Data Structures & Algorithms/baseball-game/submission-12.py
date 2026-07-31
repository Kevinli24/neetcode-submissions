class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        for i in range(len(operations)):
            if (operations[i] == '+'):
                secondsum = stack.pop()
                firstsum = stack.pop()
                summ = firstsum + secondsum
                stack.append(firstsum)
                stack.append(secondsum)
                stack.append(summ)
            
            elif (operations[i] == 'C'):
                stack.pop()

            elif (operations[i] == 'D'):
                todouble = stack.pop()
                double = todouble * 2
                stack.append(todouble)
                stack.append(double)

            else:
                stack.append(int(operations[i]))


        return sum(stack)