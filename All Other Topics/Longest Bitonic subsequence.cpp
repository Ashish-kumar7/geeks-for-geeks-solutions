#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    
	    
	    int B[n];
	    int C[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        B[i]=1;
	        C[i]=1;
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(A[i]>A[j]){
	                B[i]=max(B[i],B[j]+1);
	            }
	        }
	    }
	    for(int i=n-2;i>0;i--){
	        for(int j=n-1;j>i;j--){
	            if(A[i]>A[j]){
	                C[i]=max(C[i],C[j]+1);
	            }
	        }
	    }
	int max=-1;
	for(int i=0;i<n;i++){
	        if(B[i]+C[i]-1 > max){
	            max=B[i]+C[i]-1;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}