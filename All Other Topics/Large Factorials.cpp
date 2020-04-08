#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	    int n, i, power = 0;
	    cin >> n;
	    double fact = 1;
	    for(i = 1; i <= n ; i++){
	        fact = fact * i;
	        while(int(fact)>9){
	            power++;
	            fact = fact / 10;
	        }
	    }
	   cout<<(int)fact<<" "<< power<< endl;
	}
	return 0;
}