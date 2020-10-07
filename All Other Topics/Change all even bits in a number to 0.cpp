class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // code here
        return (n & 0xaaaaaaaa);
    }
};