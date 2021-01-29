class Solution{
	public:
    	long long findNth(long long N){
        long long ans=0;
        long long pos=1;
        while(N>0){
            ans=ans+pos*(N%9);
            N=N/9;
            pos=pos*10;
        }
        return ans;
    }
};