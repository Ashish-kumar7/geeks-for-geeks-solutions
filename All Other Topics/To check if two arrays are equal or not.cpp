#include<bits/stdc++.h>
using namespace std;

bool areEqual(unsigned long long int arr1[],unsigned long long int arr2[],unsigned long long int n,unsigned long long int m) {  
    if (n != m) 
        return false; 
  
    unordered_map<unsigned long long int,unsigned long long int> mp; 
    for (unsigned long long int i = 0; i < n; i++) 
        mp[arr1[i]]++; 
        
    for (unsigned long long int i = 0; i < n; i++) { 
        if (mp.find(arr2[i]) == mp.end()) 
            return false; 
  
        if (mp[arr2[i]] == 0) 
            return false; 
  
        mp[arr2[i]]--; 
    } 
    return true; 
} 

int main(){
	//code
    unsigned long long int t;
	cin>>t;
	while(t--){
	    unsigned long long int n;
	    cin>>n;
	    unsigned long long int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    unsigned long long int B[n];
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	   if( areEqual(A,B,n,n)){
	       cout<<1<<endl;
	   }
	   else{
	       cout<<0<<endl;
	   }
	    
	
	}
	return 0;
}