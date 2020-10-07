
class Solution {
  public:
    int maximizeMoney(int n, int K) {
        // code here
        if(n%2==0){
            return (n/2)*K;
        }
        else{
            return ((n/2)+1)*K;
        }
        
    }
};