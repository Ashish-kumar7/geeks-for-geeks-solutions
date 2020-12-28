class Solution {
  public:
  int solve(int a){
      int sum=0;
      for(int i=1;i<=a/2;i++){
          if(a%i==0){
             // ans.push_back(i);
              sum+=i;
          }
      }
      return sum;
  }
    int isAmicable(int A , int B) {
        // code here
        int val1=solve(A);
        int val2=solve(B);
        
        if(val1==B && val2==A){
            return 1;
        }
        return 0;
    }
};