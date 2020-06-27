class Solution:
    def numSquares(self, n: int) -> int:
        arr,i=[],1
        while i**2<=n:
            arr.append(i**2)
            i+=1
        
        if n in arr:
            return 1
        for s in arr:
            if n-s in arr:
                return 2
        arr_set=set(arr)
        for i in range(len(arr)):
            for j in range(len(arr)):
                if n-arr[i]-arr[j] in arr_set:
                    return 3
        return 4        
