#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	 stack<long long int>S;
	 long long int area=0;
	long long int max_area=0;
	long long  int i;
	 for( i=0;i<n;){

	    if(S.empty() || A[S.top()]<=A[i]){
	     S.push(i);
	     i++;
	    }

	    else{
	        int top=S.top();
	        S.pop();
	        if(S.empty()){
	            area=A[top] * i;
	        }
	        else{
	            area=A[top] * (i-S.top()-1);
	        }
	        if(max_area<area){
	            max_area=area;
	        }
	    }
	 }
	 while(!S.empty()){
	     long long int top=S.top();
	        S.pop();
	        if(S.empty()){
	            area=A[top] * i;
	        }
	        else{
	            area=A[top] * (i-S.top()-1);
	        }
	        if(max_area<area){
	            max_area=area;
	        }
	 }
	    cout<<max_area<<endl;
	 }
	return 0;
}