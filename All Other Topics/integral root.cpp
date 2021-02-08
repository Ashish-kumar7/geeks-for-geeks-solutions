
class Solution{
public:
    long long integralRoot(int N, int K){
        // code here
        // int count=0;
        long long int a=pow(N,K);
        long long int b=pow(N+1,K);
        
        return b-a;
    }
};