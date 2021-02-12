class Solution {
  public:
    long long int totalMoves(long long int N){
        // code here#include <cmath>

	    long long int r=pow(2,N);
        return r-1;
    }
};