#include <bits/stdc++.h> 
using namespace std; 
int lenOfLongSubarr(int arr[], int n, int k) {  
	unordered_map<int, int> um; 
	int sum = 0, maxLen = 0; 
	for (int i = 0; i < n; i++) { 
		sum += arr[i];
		if (sum == k) 
			maxLen = i + 1;
		if (um.find(sum) == um.end()) 
			um[sum] = i;
		if (um.find(sum - k) != um.end()) {
			if (maxLen < (i - um[sum - k])) 
				maxLen = i - um[sum - k]; 
		} 
	}  
	return maxLen; 
} 
int main() { 
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int sum;
	    cin>>n;
	    cin>>sum;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    
	  cout<<lenOfLongSubarr(A,n,sum)<<endl;  
	}
	return 0; 
} 