#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int  t;
	cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        int B[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        
        for(int i=0;i<n;i++)
        {
            cin>>B[i];
        }
        
        
        sort(A,A+n);
        sort(B,B+n);
       unsigned long long int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=A[j]*B[n-j-1];
        }
        cout<<sum<<endl;
    }
	return 0;
}