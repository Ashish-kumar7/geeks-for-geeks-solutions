#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permute(string a,int l,int n,vector<string>&s)
{
    if(l==n)
    {
        s.push_back(a);
    }
    else
    {
        for(int j=l;j<=n;j++){
            swap(a[l],a[j]);
            permute(a,l+1,n,s);
            swap(a[l],a[j]);
        }
        
    }
    
}


int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	string a;
	cin>>a;
	int n=a.length();
	vector<string>s;
	permute(a,0,n-1,s);
	sort(s.begin(),s.end());
	for(int i=0;i<s.size();i++)
	{
	    cout<<s[i]<<" ";
	}
	
	cout<<endl;
	}
	return 0;
}