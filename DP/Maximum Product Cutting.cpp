#include<bits/stdc++.h>
using namespace std;
long long int  func(int n)
{
	if(n==2 || n==3)
		return n-1;
	long long int res=1;
	while(n>4)
	{
		n-=3;
		res*=3;
		res%=1000000007;
	}
	return (n*res)%1000000007;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<func(n)<<endl;
	}
}