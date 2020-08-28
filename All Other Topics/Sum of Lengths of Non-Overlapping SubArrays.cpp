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
	    int key;
	    cin>>key;
	    
	    vector<int>V;
	    
	    for(int i=0;i<n;i++){
	        if(A[i]==key){
	            V.push_back(i);
	        }
	    }
	    
	    int count=0;
	    
	        for(int j=0;j<V.size();j++){
	            for(int i=V[j]+1;i<n;i++){
	                if(A[i]<=key){
	                    count++;
	                }
	                else {
	                    break;
	                }
	            }        
	        }
	        
	        
	        for(int j=0;j<V.size();j++){
	            for(int i=V[j]-1;i>=0;i--){
	                if(A[i]<=key){
	                    count++;
	                }
	                else {
	                    break;
	                }
	            }        
	        }
	    
	cout<<count+V.size()<<endl;
	
	}
	return 0;
}