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
	    int price;
	    cin>>price;
	    
	    int balance=0;
	    int buy=0;
	    
	    buy+=A[0];
	    
	    for(int i=1;i<n;i++){
	        if(A[i]>A[i-1]){
	            if((A[i]-A[i-1])>balance){
	                buy+=(A[i]-A[i-1]-balance);
	                balance=0;
	            }
	            else{
	                balance=balance-(A[i]-A[i-1]);
	            }
	        }
	        else if(A[i]<A[i-1]){
	            balance+=(A[i-1]-A[i]);
	        }
	    }
	    
	    
	    
	    cout<<(buy*price)<<endl;
	
	}
	return 0;
}