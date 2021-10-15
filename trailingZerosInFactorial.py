class Solution:
    def trailingZeroes(self, N):
        count=0
    	while N>=5:
    	    N//=5
    	    count+=N
    	return count
    
