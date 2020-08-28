#include<bits/stdc++.h>
using namespace std;
void rearrange(long long int A[], int n) { 
    int max_val=A[n-1]+1;
    int max_idx=n-1;
    int min_idx=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            A[i]+=(A[max_idx]%max_val)*max_val;
            max_idx--;
        }
        else{
            A[i]+=(A[min_idx]%max_val)*max_val;
            min_idx++;
        }
    }
    for(int i=0;i<n;i++){
        A[i]=A[i]/max_val;
    }
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   long long int A[n];;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	   rearrange(A,n);
	    for(int i=0;i<n;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}