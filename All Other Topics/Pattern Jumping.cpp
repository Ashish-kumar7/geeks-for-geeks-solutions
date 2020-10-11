#include<bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n==0){
        return 0;
        
    }
    if(n==1){
        return 1;
    }
    while(n!=1){
        if(n%2!=0){
            return 0;
        }
        n=n/2;
    }
    return 1;
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(solve(n)){
	        cout<<"True"<<endl;
	    }
	    else{
	        cout<<"False"<<endl;
	    }
	
	}
	return 0;
}