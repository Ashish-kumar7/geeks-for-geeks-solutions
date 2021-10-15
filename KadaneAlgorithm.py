class Solution:
    def maxSubArraySum(self,a,n):   
        globalMax=currentMax=a[0]
        for i in range(1,n):
            currentMax=max(a[i],currentMax+a[i])
            
            if currentMax>globalMax:
                globalMax=currentMax
                
        return globalMax
