class Solution {
    long long int solve(long long int n,vector<int>A,long long int k){
        long long int start=0;
        long long int end=0;
        
        long long int count=0;
        long long int sum=0;
        
        while(end<n){
            sum+=A[end];
            while(start<=end && sum>k){
                sum=sum-A[start];
                start++;
            }
            
            count+=(end-start+1);
            end++;
        }
        return count;
    }
  public:
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        long long int ans=solve(N,A,R)-solve(N,A,L-1);
        return ans;
    }
};
