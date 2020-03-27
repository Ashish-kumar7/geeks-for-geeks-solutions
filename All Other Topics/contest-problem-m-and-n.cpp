#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int m,n;
	cin>>m;
	cin>>n;
	int x=m+n;
	int y=x;
	int h=n;
	int c=0;
	int d=0;
	while(n>0)
	{
	    c++;
	    n=n/10;
	}
	while(x>0)
	{
	    d++;
	    x=x/10;
	}
	if(c==d)
	{
	    cout<<h<<endl;
	}
	else{
	    cout<<y<<endl;
	}
	
	}
	return 0;
}