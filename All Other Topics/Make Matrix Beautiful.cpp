#include<bits/stdc++.h>
using namespace std;

int matrix[101][101];

int findMinOpeartion( int n) { 
    
    int sumRow[n], sumCol[n]; 
    memset(sumRow, 0, sizeof(sumRow)); 
    memset(sumCol, 0, sizeof(sumCol)); 
  
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) { 
            sumRow[i] += matrix[i][j]; 
            sumCol[j] += matrix[i][j]; 
        } 
    int maxSum = 0; 
    for (int i = 0; i < n; ++i) { 
        maxSum = max(maxSum, sumRow[i]); 
        maxSum = max(maxSum, sumCol[i]); 
    } 
  
    int count = 0; 
    for (int i = 0, j = 0; i < n && j < n;) { 
  
        int diff = min(maxSum - sumRow[i], 
                       maxSum - sumCol[j]); 
  
        matrix[i][j] += diff; 
        sumRow[i] += diff; 
        sumCol[j] += diff; 
  
        count += diff; 
  
        if (sumRow[i] == maxSum) 
            ++i; 
  
        if (sumCol[j] == maxSum) 
            ++j; 
    } 
    return count; 
} 

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // int A[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>matrix[i][j];
	        }
	    }
	
	    int x=findMinOpeartion(n);
	    cout<<x<<endl;
	}
	return 0;
}