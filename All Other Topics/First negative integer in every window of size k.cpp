#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	       cin>>arr[i];
	    
	    int k;
	    cin>>k;
	    
	    queue<int>Q;
	    
	    for(int i = 0; i < k; ++i){
	      if(arr[i] < 0) {
	          Q.push(arr[i]);
	      }
	    }
	      
	  for(int i = k; i <= n - 1; ++i)
	  {
	      if(Q.size() != 0){
	        cout<<Q.front()<<" ";
	      }
	      else{
	          cout<<"0 ";
	      } 
	      if(arr[i-k] < 0) {
	          Q.pop();
	      }
	      if(arr[i] < 0) {
	          Q.push(arr[i]);
	      }
	  }
	  
	   if(Q.size() != 0){
	      cout<<Q.front()<<" ";
	   }
	      else {
	          cout<<"0 ";
	      }
	  cout<<endl;
	    
	}
	return 0;
}