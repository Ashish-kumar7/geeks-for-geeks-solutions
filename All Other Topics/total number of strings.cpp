#include<bits/stdc++.h>
using namespace std;

int countStr(int n, int bCount, int cCount) 
{ 
    
    if (bCount < 0 || cCount < 0) return 0; 
    if (n == 0) return 1; 
    if (bCount == 0 && cCount == 0) return 1; 
    int res = countStr(n-1, bCount, cCount); 
    res += countStr(n-1, bCount-1, cCount); 
    res += countStr(n-1, bCount, cCount-1); 
  
    return res; 
} 

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<countStr(n,1,2)<<endl;
	
	}
	return 0;
}