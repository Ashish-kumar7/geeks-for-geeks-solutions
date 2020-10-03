#include<bits/stdc++.h>
using namespace std;

int a[1000][1000],k,flag=0;
void printpath(int i,int s,int n,int incl[])
{
if(i<n)
{
if(s>=k)
flag=1;
for(int j=0;j<n;j++)
if(a[i][j]>0 && incl[j]==0 && j!=i)
{
s+=a[i][j];
incl[i]=1;
printpath(j,s,n,incl);
s-=a[i][j];
incl[i]=0;
}
}
}

int main() {
	int t;cin>>t;
	for(int x=1;x<=t;x++)
	{
	flag=0;
	int n;cin>>n;
	int e;cin>>e;
	a[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	a[i][j]=0;
	cin>>k;
	int b[3][e];
	for(int i=0;i<e;i++)
	{
	cin>>b[0][i];
	cin>>b[1][i];
	cin>>b[2][i];
	}
	for(int i=0;i<e;i++)
	{
	a[b[0][i]][b[1][i]]=b[2][i];
	a[b[1][i]][b[0][i]]=b[2][i];
	}
	
	int incl[n];
	memset(incl,0,sizeof(incl));
	
	printpath(0,0,n,incl);
	cout<<flag<<endl;
	}
	return 0;
}