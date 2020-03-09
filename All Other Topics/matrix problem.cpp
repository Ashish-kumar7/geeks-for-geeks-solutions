#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int m,n;
	cin>>m;
	cin>>n;
	int mn[m][n];
	
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cin>>mn[i][j];
	    }
	}
	
	int row[m];
	int column[n];
	for(int i=0;i<m;i++)
	{
	    row[i]=0;
	}
	for(int i=0;i<n;i++)
	{
	    column[i]=0;
	}
	
	
	
	
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(mn[i][j]==1)
	        {
	            row[i]=1;
	            column[j]=1;
	        }
	    }
	}
	
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(row[i]==1 || column[j]==1)
	        {
	            mn[i][j]=1;
	        }
	    }
	}
	
	
	
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cout<<mn[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	
	
	}
	return 0;
}