class Solution {
    int factorial(int a){
        int sum=1;
        for(int i=1;i<=a;i++){
            sum=sum*i;
        }
        return sum;
    }
  public:
    int isStrong(int N) {
        // code here
        int val=N;
        int res=0;
        while(N>0){
            
            res+=factorial(N%10);
            N=N/10;
        }
        //cout<<res<<endl;
        return (res==val);
    }
};