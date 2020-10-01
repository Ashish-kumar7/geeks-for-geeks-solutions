#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ 
	int t;
	cin>>t;
	while(t--)
	{
			int n,w;
			cin>>n;
			cin>>w;
			int wt[n],val[n];
			int i,j;
			for(i=0;i<n;i++)
			{
				cin>>val[i];
			}
			for(i=0;i<n;i++)
			{
				cin>>wt[i];	
			}
			int dp[n+1][w+1];
			
			for(i=0;i<=n;i++)
			{
				for(j=0;j<=w;j++)
				{
					
					if(i==0||j==0)
					dp[i][j]=0;
					else if(wt[i-1]<=j)
					{
						dp[i][j]=max((val[i-1]+dp[i-1][j-wt[i-1]]),dp[i-1][j]);
					}
					else
					{
						dp[i][j]=dp[i-1][j];
					}
					
				}	
				
			}		
			cout<<dp[n][w];
			cout<<endl;
	}
	return 0;
}
