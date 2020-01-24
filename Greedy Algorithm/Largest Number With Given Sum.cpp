#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	   int a;
	   cin>>a;
	   int n;
	   cin>>n;
	   int A[a];
	   for(int i=0;i<a;i++){
	       A[i]==0;
	   }
	  for(int j=0;j<a;j++){
	      if(n>=9){
	          A[j]=9;
	          n=n-9;
	      }
	      else if(n<9){
	          A[j]=n;
	          n=n-n;
	      }
	  }
	  if(n!=0){
	      cout<<-1<<endl;
	  }
	  else{
	      for(int h=0;h<a;h++){
	          cout<<A[h];
	      }
	      cout<<endl;
	  }
	}
	return 0;
}