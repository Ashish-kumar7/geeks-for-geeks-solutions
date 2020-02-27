#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
   int tt;
   cin>>tt;
   while(tt--)
   {
       int n;
       cin>>n;
       long long arr[n];
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
       }
       long long ans=0;
       if(n==2)
       {
           ans=arr[1]+arr[1]-arr[0];
       }
       else if((arr[0]+arr[2])==(2*arr[1]))
       {
           ans=arr[n-1]+(abs(arr[0]-arr[1]));
       }
       else if((arr[0]*arr[2])==powl(arr[1],2) && arr[2]!=0 && arr[0]!=0)
       {
           ans=arr[n-1]*(arr[1]/arr[0]);
       }
       else if((arr[0]+arr[1])==arr[2])
       {
           ans=arr[n-1]+arr[n-2];
       }
       else
       {
           ans=-99999;
       }
       ans=ans%MOD;
       cout<<ans<<endl;
   }
}
