#include<bits/stdc++.h>
using namespace std;

void sieve(int n,int A[]){
    
    int check[n+1];
    
    for(int i=0;i<n+1;i++){
        check[i]=0;
    }
    
    for(int i=2;i<=n;i+=2){
        A[i]=2;
        check[i]=1;
    }
   
    
    for(int i=3;i<=n;i+=2){
        if(check[i]==0){
            for(int j=i;j<=n;j+=i){
                if(check[j]==0){
                    A[j]=i;
                    check[j]=1;
                }
        }  
    }
}
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n+1];
	    sieve(n,A);
	 
	    int count=1;
	    int curr=A[n];
	    while(n>1){
	        n=n/A[n];
	        if(curr==A[n]){
	            count++;
	            continue;
	        }
	        cout<<curr<<" "<<count<<" ";
	        curr=A[n];
	        count=1;
	    }
	cout<<endl;
	}
	return 0;
}