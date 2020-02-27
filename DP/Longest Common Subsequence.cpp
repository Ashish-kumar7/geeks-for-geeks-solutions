#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int a;
	int b;
	cin>>a;
	cin>>b;
	string AA;
	string BB;
	cin>>AA;
	cin>>BB;
    int LCS[a+1][b+1];
    for(int k=0;k<=a;k++){
        for(int l=0;l<=b;l++){
            if(l==0 || k==0){
                LCS[k][l]=0;
            }
           else if(AA[k-1]==BB[l-1]){
                LCS[k][l]=1+LCS[k-1][l-1];
            }
            else {
                LCS[k][l]=max(LCS[k][l-1],LCS[k-1][l]);
            }
        }
    }
    cout<<LCS[a][b]<<endl;
	}
	return 0;
}