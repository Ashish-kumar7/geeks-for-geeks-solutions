#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long int  binomial(long long int n, long long int k)
{
    long long int arr[n+1][k+1];
    for(long long int i=1;i<=n;i++)
    {
        for(long long int j=0;j<=min(i,k);j++)
        {
            if(j==0 or j==i) arr[i][j]=1;
            else arr[i][j] = ( (arr[i-1][j-1]%mod) + (arr[i-1][j]%mod) )%mod;
        }
    }
    return arr[n][k];
}
int main()
{
  long long int t; cin>>t;
    while(t--)
    {
        long long int n,k; cin>>n>>k;
        if(n>=k)
        {
        long long int ans = binomial(n,k);
        cout<<ans<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;
}