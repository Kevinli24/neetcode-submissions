class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        for i in range(1, len(arr)):
            max_value = max(arr[i:])
            arr[i-1] = max_value

        arr[len(arr)-1] = -1

        return arr
