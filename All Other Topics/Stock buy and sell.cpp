 
#include <bits/stdc++.h> 
using namespace std; 
 
void stockBuySell(int price[], int n) 
{ 
	if (n == 1) 
		return; 

	int i = 0; 
	int flag=0;
	while (i < n - 1) { 
		while ((i < n - 1) && (price[i + 1] <= price[i])){
		   	i++;  
		}
		if (i == n - 1){
		    if(flag==0){
		        cout<<"No Profit"<<endl;
		        return ;
		    }
		   break;
		}
		int buy = i; 
		i++;
		while ((i < n) && (price[i] >= price[i - 1])) 
			i++; 
		int sell = i-1; 
	
		cout << "(" << buy<<" "<<sell<<")"<<" "; 
		flag=1;	
	} 
	cout<<endl;
} 
int main(){ 
	int t;
	cin>>t;
	while (t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	// Fucntion call 
	stockBuySell(A, n); 
}
	return 0; 
} 