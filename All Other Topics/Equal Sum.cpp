class Solution{
public:
	string equilibrium(int *arr, int n) {
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    int sum2=0;
	    sum=sum-arr[0];
	    for(int i=1;i<n;i++){
	        sum2+=arr[i-1];
	        sum=sum-arr[i];
	        if(sum==sum2){
	            return "YES";
	        }
	    }
	    return "NO";
	}
};