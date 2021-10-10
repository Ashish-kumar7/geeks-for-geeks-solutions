// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long maximumAmount(int arr[], int n)
    {
        // Your code here
        long long dp[n][n];
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0, k = i ; k < n ; j++, k++)
            {
                int x = j + 2 <= k ? dp[j+2][k] : 0;
                int y = j + 1 <= k - 1 ? dp[j+1][k-1] : 0;
                int z = j <= k - 2 ? dp[j][k-2] : 0;
                dp[j][k] = max(arr[j] + min(x, y), arr[k] + min(y, z));
            }
        }
        return dp[0][n-1];
    }
};

// { Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
