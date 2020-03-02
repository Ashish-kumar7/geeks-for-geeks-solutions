#include<bits/stdc++.h>
using namespace std;

int dp[101][100001];
int checker[101][100001]={0};

bool partition(int A[],int n,int i,int sum){   
    if(sum==0){
        return 1;
    }
    if(i==n && sum!=0){
        return 0;
    }
    if(sum<0){
        return 0;
    }
    if(checker[i+1][sum]==0){
        checker[i+1][sum]=1;
        dp[i+1][sum]=partition(A,n, i+1, sum);
    }
    if(checker[i+1][sum-A[i]]==0){
        checker[i+1][sum-A[i]]=1;
        dp[i+1][sum-A[i]]=partition(A,n, i+1, sum-A[i]);
    }
    return ( dp[i+1][sum] || dp[i+1][sum-A[i]] ) ;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	int sum=0;
	for(int i=0;i<n;i++){
	    cin>>A[i];
	    sum+=A[i];
	    }
	if(sum%2!=0){
	    cout<<"NO"<<endl;
	    continue;
	}
		sum=sum/2;
    if(partition(A,n,0,sum)==1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
	}
	return 0;
}