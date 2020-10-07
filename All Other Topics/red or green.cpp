class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int countg=0;
           int countr=0;
           for(int i=0;i<N;i++){
               if(S[i]=='G'){
                   countg++;
               }
               else{
                   countr++;
               }
           }
           return min(countr,countg);
    }
};