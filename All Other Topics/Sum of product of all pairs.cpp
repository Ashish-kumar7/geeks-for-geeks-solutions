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
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	   long long int sum=0;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            sum+=(A[i]*A[j]) ;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}