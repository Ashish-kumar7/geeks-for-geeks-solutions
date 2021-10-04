// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends

typedef long long int ll;
long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    vector<ll> ans;
    int nn=n-1;
    if(n%2==0)
    {
            for(ll i=0;i<n/2;i++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[nn-i]);
        }    
    }
    else
    {
        for(ll i=0;i<n/2;i++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[nn-i]);
        }
        ans.push_back(arr[n/2]);
    }
    
    ll sum=0;
    for(ll i=0;i<ans.size();i++)
    {
        sum+=abs(ans[i]-ans[(i+1)%n]);
    }
    return sum;
    
}
