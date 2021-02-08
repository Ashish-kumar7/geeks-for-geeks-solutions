class Solution {
    public:
    int repeatedSubtraction(int A,int B){
        //code here
        if (A%B == 0) 
        return A/B; 
 
    return A/B + repeatedSubtraction(B, A%B); 
    }
};
