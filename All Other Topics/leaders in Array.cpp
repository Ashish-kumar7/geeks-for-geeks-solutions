#include <iostream>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	  vector<int>V;

	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	int max=A[n-1];

	for(int i=n-1;i>=0;i--)
	{
	 if(A[i]>=max)
	 {
	     max=A[i];
	     V.push_back(max);

	 }
	}
	 int yry=V.size();

	  for(int jj=yry-1;jj>=0;jj--)

{
    cout<<V[jj]<<" ";
}
cout<<endl;

	}
	return 0;
}
