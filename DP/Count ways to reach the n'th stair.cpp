#include <bits/stdc++.h>
using namespace std;
long long int m=pow(10,9)+7;
int main() {
	//code
	int t;cin>>t;
	long long int arr[100000];
	    arr[0]=1;arr[1]=1;
	    for(int i=2;i<=100000;i++)
	    {
	        arr[i]=(arr[i-1]%m+arr[i-2]%m)%m;
	    }
	while(t--)
	{
	    int n;cin>>n;
	    cout<<arr[n]<<"\n";
	}
	return 0;
}