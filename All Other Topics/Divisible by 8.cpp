#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	
    string A=to_string(n);
    
    sort(A.begin(),A.end());
    
    int flag=0;
    
    if(stoi(A)%8==0){
        flag=1;
        //break;
    }
    while( next_permutation( A.begin(),A.end() ) ){
        if(stoi(A)%8==0){
            flag=1;
            //break;
        }
    }
	if(flag==1){
	    cout<<"Yes"<<endl;
	}
	else 
	{
	    cout<<"No"<<endl;
	}
	}
	return 0;
}