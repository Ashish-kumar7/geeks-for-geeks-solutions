#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int A[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	        cin>>A[i][j];
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            int temp=A[i][j];
	            A[i][j]=A[j][i];
	            A[j][i]=temp;
	        }
	    }
	    
	     for(int i=0;i<n;i++){
	        for(int j=n-1;j>=0;j--){
	            cout<<A[i][j]<<" ";
	        }
	    }
	    
	    cout<<endl;
	    
	
	}
	return 0;
}