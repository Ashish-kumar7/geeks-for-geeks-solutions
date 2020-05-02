#include<bits/stdc++.h>

using namespace std;

int finding(string A,string B,int n){
    int C[n+1][n+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                C[i][j]=0;
            }
            else if(A[i-1]==B[j-1]){
                C[i][j]=C[i-1][j-1]+1;
            }
            else {
                C[i][j]=max(C[i-1][j],C[i][j-1]);
            }
        }
    }
    return C[n][n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    string A;
	    cin>>A;
	    string B=A;
	    int n=A.length();
	    reverse(B.begin(),B.end());
	 int h=   finding(A,B,n);
	 cout<<h<<endl;
	}
	return 0;
}