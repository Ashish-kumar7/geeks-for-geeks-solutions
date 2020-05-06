#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	   string str;
	   cin>>str;
	   int ac=0;
	   int bc=0;
	   int cc=0;
	   for(int i=0;i<str.length();i++){
	       if(str[i]=='a'){
	           ac=ac*2 + 1;
	       }
	       else if(str[i]=='b'){
	           bc=bc*2 + ac;
	       }
	       else if(str[i]=='c'){
	           cc=cc*2 + bc;
	       }
	   }
	   cout<<cc<<endl;
	}
	return 0;
}