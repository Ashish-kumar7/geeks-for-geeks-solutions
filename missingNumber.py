class Solution:
    def MissingNumber(self,array,n):
        supposedToBeArray=set(range(1,n+1))
        array=set(array)
        missingElement=supposedToBeArray.difference(array).pop()
        
        return missingElement
