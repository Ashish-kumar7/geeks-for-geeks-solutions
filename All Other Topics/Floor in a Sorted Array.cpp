
#include <bits/stdc++.h> 
using namespace std;
int floorSearch(int arr[], int n, int x){ 
	if (x >= arr[n - 1]) 
		return n - 1; 
	if (x < arr[0]) 
		return -1; 
	for (int i = 1; i < n; i++) 
		if (arr[i] > x) 
			return (i - 1); 
	return -1; 
}
int main() { 
	 int t;
	 cin>>t;
	 while(t--){
	     int n;
	     cin>>n;
	     int k;
	     cin>>k;
	     int A[n];
	     for(int i=0;i<n;i++){
	         cin>>A[i];
	     }
	     int val=floorSearch(A,n,k);
	     cout<<val<<endl;
	 }
	return 0; 
}