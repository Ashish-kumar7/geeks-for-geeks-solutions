#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string A;
	    cin>>A;
	    stack<int>S;
	    int num=1;
	    for(int i=0;i<A.size()+1;i++){
	        S.push(num);
	        num++;
	        if(A[i]=='I' || i==A.size()){
	            while(!S.empty()){
	                cout<<S.top();
	                 S.pop();
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}