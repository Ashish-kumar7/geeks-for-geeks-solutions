#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n;
	    cin>>k;
	      priority_queue <int> A; 
	      while(n--){
	          int yy;
	          cin>>yy;
	          A.push(yy);
	      }
	    int sum=0;
	    while(k--)
	    {
         int y =A.top();
	     sum=sum+A.top();
	     A.pop();
	     A.push(y-1);
 }
        cout<<sum<<endl;;
}
	return 0;
}