class Solution {
  public:
    int setAllRangeBits(int n , int l , int r) {
        // code here
        int range = (((1 << (l - 1)) - 1) ^     
                ((1 << (r)) - 1)); 
  
        return (n | range); 
    }
};