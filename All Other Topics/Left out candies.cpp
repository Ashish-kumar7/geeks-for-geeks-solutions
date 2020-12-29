#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    cin>>n;
	    
	    int x=(m)*(m+1)/2;
	    
	    int y=n%x;
	    
	    int val=0;
	    int i=0;
	    while(true){
	        if(val>y){
	            break;
	        }
	        val+=i;
	        i++;
	    }
	    
	 //   cout<<y<<" "<<val<<" "<<i<<endl;
	    
	    cout<<y-(val-(i-1))<<endl;
	    
	
	}
	return 0;
}