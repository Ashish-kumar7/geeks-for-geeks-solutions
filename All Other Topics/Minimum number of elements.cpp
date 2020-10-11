class Solution{

	public:

	int countMin(int arr[], int dp[102][102][102], int n, int dec, int inc, int i) 
{ 
    // If already calculated, return value. 
    if (dp[dec][inc][i] != -1) 
        return dp[dec][inc][i]; 
  
    // If whole array is traversed. 
    if (i == n) 
        return 0; 
  
 
    if (arr[i] < arr[dec]) 
        dp[dec][inc][i] = countMin(arr, dp, n, i, inc, i + 1); 
  
 
    if (arr[i] > arr[inc]) 
    { 
        if (dp[dec][inc][i] == -1) 
            dp[dec][inc][i] = countMin(arr, dp, n, dec, i, i + 1); 
        else
            dp[dec][inc][i] = min(countMin(arr, dp, n, dec, i, i + 1), 
                                                  dp[dec][inc][i]); 
    } 
    if (dp[dec][inc][i] == -1) 
        dp[dec][inc][i] = 1 + countMin(arr, dp, n, dec, inc, i + 1); 
    else
        dp[dec][inc][i] = min(1 + countMin(arr, dp, n, dec, inc, i + 1), 
                                                    dp[dec][inc][i]); 
  
    return dp[dec][inc][i]; 
}  
int wrapper(int arr[], int n) 
{ 
    arr[102 - 2] = INT_MAX; 
    arr[102 - 1] = INT_MIN; 
  
    int dp[102][102][102]; 
    memset(dp, -1, sizeof dp); 
  
    return countMin(arr, dp, n, 102 - 2, 102 - 1, 0); 
} 
  
	int minCount(int arr[], int N) 
	{ 
        // Your code goes here 
        return wrapper(arr,N);
	} 
};
