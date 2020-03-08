#include<bits/stdc++.h> 
using namespace std; 

long long int count(long long int x,long long int Y[],long long int n,long long int NoOfY[]) 
{ 

	if (x == 0) return 0; 

	if (x == 1) return NoOfY[0]; 

long long int* idx = upper_bound(Y, Y + n, x); 
	long long int ans = (Y + n) - idx; 

	// If we have reached here, then x must be greater than 1, 
	// increase number of pairs for y=0 and y=1 
	ans += (NoOfY[0] + NoOfY[1]); 

	// Decrease number of pairs for x=2 and (y=4 or y=3) 
	if (x == 2) ans -= (NoOfY[3] + NoOfY[4]); 

	// Increase number of pairs for x=3 and y=2 
	if (x == 3) ans += NoOfY[2]; 

	return ans; 
} 

// Function to return count of pairs (x, y) such that 
// x belongs to X[], y belongs to Y[] and x^y > y^x 
long long int countPairs(long long int X[], long long int Y[],long long int m,long long int n) 
{ 
	// To store counts of 0, 1, 2, 3 and 4 in array Y 
	long long int NoOfY[5] = {0}; 
	for (int i = 0; i < n; i++) 
		if (Y[i] < 5) 
			NoOfY[Y[i]]++; 

	// Sort Y[] so that we can do binary search in it 
	sort(Y, Y + n); 

	long long int total_pairs = 0; // Initialize result 

	// Take every element of X and count pairs with it 
	for (int i=0; i<m; i++) 
		total_pairs += count(X[i], Y, n, NoOfY); 

	return total_pairs; 
} 

// Driver program 
int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	    long long int m,n;
	    cin>>m;
	    cin>>n;
	   long long int X[m];
	   long long  int Y[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>X[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>Y[i];
	    }
// 	    int m = sizeof(X)/sizeof(X[0]); 
// 	int n = sizeof(Y)/sizeof(Y[0]); 

	cout <<countPairs(X, Y, m, n)<<endl;
	}

	
	return 0; 
}
