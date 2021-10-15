class Solution:
    def currentSum(self,arr, n, reqdSum):
        currentSum=0
        Map={}
        for i in range(0,n):
            currentSum+=arr[i]
            
            if currentSum==reqdSum:
                return [0,i]
                break
            
            if currentSum-reqdSum in Map:
                return [Map[currentSum-reqdSum]+1,i]
                break
            
            Map[currentSum]=i
        
        return [-1]
                
