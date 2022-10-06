    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int current_sum=0;
        int max_sum=INT_MIN;
        
        for(int i=0;i<n;i++){
            current_sum+=arr[i];
            if(max_sum<current_sum){
                max_sum=current_sum;
            }
            if(current_sum<0){
                current_sum=0;
            }
            
        }
        return max_sum;
        
        // Your code here
        
    }
};
