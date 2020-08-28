#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int min_ele=A[0];
	    int max_diff=INT_MIN;
	    for(int i=1;i<n;i++){
	        if( A[i]-min_ele >= max_diff){
	            max_diff=A[i]-min_ele;
	        }
	        if(A[i]<min_ele){
	            min_ele=A[i];
	        }
	    }
	cout<<max_diff<<endl;
	}
	return 0;
}