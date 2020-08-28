#include<bits/stdc++.h>
using namespace std;
int kadane(int A[],int n){
    int max_sum=0;
    int max_sum_upto_here=0;
    int i;
    for(i=0;i<n;i++){
        max_sum_upto_here+=A[i];
        if(max_sum_upto_here < 0){
            max_sum_upto_here=0;
        }
        if(max_sum < max_sum_upto_here){
            max_sum=max_sum_upto_here;
        }
    }
    return max_sum;
}
int investigate(int A[],int n){
    int count=0;
    int max_val=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>max_val){
             max_val=A[i];
        }
    }
    for(int i=0;i<n;i++){
        if(A[i]<0){
            count++;
        }
    }
    if(count==n){
        return max_val;
    }
    //case 1
    int max1=kadane(A,n);
    int sum=0;
    // case 2
    for(int i=0;i<n;i++){
        sum=sum+A[i];
        A[i]=(-1) * (A[i]) ;
    }
   int  max2=kadane(A,n);
    int max3=0;
    max3=sum+max2;
    return max(max3,max1);
}
int main()
 {
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
	    
	    int summ=investigate(A,n);
	    
	    
	    cout<<summ<<endl;
	}
	return 0;
}