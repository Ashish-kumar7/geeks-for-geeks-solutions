#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    int B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        B[i]=A[i];
	    }
	    vector<int>C;
	    sort(B,B+n);
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
	        mp[B[i]]=i;
	    }
	   for(int i=0;i<n;i++){
	       auto it=mp.find(A[i]);
	           C.push_back(it->second);
	   }
	    for(int j=0;j<n;j++){
	        cout<<C[j]<<" ";
	    }
	cout<<endl;
	}
	return 0;
}