#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
        int B[n];
        for(int i=0;i<n;i++){
            B[i]=A[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(A[j]<A[i]){
                    B[i]=max(B[j]+A[i],B[i]);
                }
            }
        }
        sort(B,B+n);
    cout<<B[n-1]<<endl;
	}
	return 0;
}