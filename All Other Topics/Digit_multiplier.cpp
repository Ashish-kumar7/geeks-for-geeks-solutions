#include <iostream>
using namespace std;
void function(int n){
    int res[100];
    if(n<9){
        cout<<n;
        return;
    }
    int j=0;
    for(int i=9;i>1;i--){
        while( n%i==0){
            n=n/i;
            res[j]=i;
            j++;
        }
    }
    if(n>10){
        cout<<-1;
        return;
    }
    for (int i=j-1; i>=0; i--){
        cout<<res[i];
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    function(n);
	    cout<<endl;
	}
	return 0;
}