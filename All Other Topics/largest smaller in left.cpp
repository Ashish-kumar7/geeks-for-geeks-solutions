#include<bits/stdc++.h>
using namespace std;

void findMaximumBefore(long long int arr[],long long int n){ 
	set<int> s; 
	set<int>::iterator it; 
	for (int i = 0; i < n; i++) { 
		s.insert(arr[i]); 
		it = s.lower_bound(arr[i]); 
		if (it == s.begin()) { 
			cout << "-1"<< " "; 
		} 
		else{ 
			it--; 
			cout << (*it) << " "; 
		} 
	}		 
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	findMaximumBefore(A, n); 
	}
	return 0;
}