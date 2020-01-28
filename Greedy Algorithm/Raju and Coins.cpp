
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n;
      cin>>k;
      int A[n];
      for(int ii=0;ii<n;ii++){
          cin>>A[ii];
      }
      sort(A,A+n);
      int i=1;
      int j=0;
      int count=0;
      while(k>i){
         if(i!=A[j]){
             k=k-i;
             count++;
             i++;
         }
         else if(i==A[j]){
             i++;
             j++;
         }
      }
    cout<<count<<endl;    
    }
	return 0;
}
