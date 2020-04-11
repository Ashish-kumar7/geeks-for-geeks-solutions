#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    for(int i = 0; i < 31; i++){
        if((((1 << i) & n) != 0) && (((1 << (i+1)) & n) != 0))
        return false;
    }
    
        return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=1;i<pow(2,n);i++){
	        if(check(i)){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}