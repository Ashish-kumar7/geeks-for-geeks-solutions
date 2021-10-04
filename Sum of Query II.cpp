class Solution{
public:
    vector<int> querySum(int n, int A[], int q, int queries[])
    {
        // code here
        vector<int>ans;
        int i=0;
        
        while(q--){
	        int a,b;
	       // cin>>a;
	       // cin>>b;
	       a=queries[i];
	       b=queries[i+1];
	        long long int sum=0;
	        for(int i=a;i<=b;i++){
	            sum=sum+A[i-1];
	        }
	        ans.push_back(sum);
	        i+=2;
	    }
	    return ans;
    }
};