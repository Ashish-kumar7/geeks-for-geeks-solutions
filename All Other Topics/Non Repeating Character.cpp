#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string S;
	    cin>>S;
	   int A[26]={0};
	   for(int i=0;i<n;i++){
	       A[S[i]-'a']++;
	   }
	   char ty='$';
	   for(int i=0;i<n;i++){
	       if( A[S[i]-'a']==1){
	           ty=S[i];
	           break;
	       }
	   }
	   if(ty=='$'){
	       cout<<-1<<endl;
	   }
	   else {
	       cout<<ty<<endl;
	   }
	}
	return 0;
}