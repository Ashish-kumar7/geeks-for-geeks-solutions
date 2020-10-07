class Solution{
public:
    long long int factorial(int N){
        //code here
        long long int ans=1;
        for(int i=1;i<=N;i++){
            ans=ans*i;
        }
        return ans;
    }
};