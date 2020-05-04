#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>& coins, int amount){
        int m=coins.size();
        sort(coins.begin(),coins.end());
        long long int A[m+1][amount+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=amount;j++){
                if(i==0 && j==0){
                    A[i][j]=0;
                }
                else if(i==0){
                    A[i][j]=INT_MAX;
                }
                else if(j==0){
                    A[i][j]=0;
                }
                else if(j<coins[i-1]) {
                    A[i][j]=A[i-1][j];
                }
                else{
                    A[i][j]=min( A[i-1][j] , (A[i][j-coins[i-1]]+1)) ;
                }
            }
        }
        if( A[m][amount]==INT_MAX){
            return -1;
        }
        else {
            return A[m][amount];
        }
    }
int main(){

	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a;
	    cin>>a;
	    vector<int>B;
	    int kj;
	    for(int i=0;i<a;i++){
            cin>>kj;
            B.push_back(kj);
	    }
	    cout<<coinChange(B,n)<<endl;
	}
	return 0;
}