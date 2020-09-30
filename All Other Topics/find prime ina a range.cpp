#include<bits/stdc++.h>
using namespace std;

void sieve(int a,int b,int A[]){
    for(int i=0;i<=b;i++){
        A[i]=0;
    }
    A[2]=1;
    for(int i=3;i<=b;i+=2){
        A[i]=1;
    }
    
    for(int i=3;i<=b;i++){
        if(A[i]==1){
            for(int j=2*i;j<=b;j+=i){
                A[j]=0;
            }
        }
    }
    return;
    
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a;
	    cin>>b;
	    int A[b+1];
	    
	   sieve(a,b,A);
	    
	    for(int i=a;i<=b;i++){
	        if(A[i]==1){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	
	}
	return 0;
}