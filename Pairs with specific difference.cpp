class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int n, int k)
    {
        // Your code goes here  
         sort(arr,arr+n);
        int sum=0;
        for(int i=n-1;i>0;i--){
            if(arr[i]-arr[i-1]<k){
                sum+=arr[i]+arr[i-1];
                i--;
            }
        }
        return sum;
    }
};