#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A,A+n);
	    int key;
	    int value;
	   map<int,int>mp;
	   for(int j=0;j<n;j++){
	       key=A[j];
	       if(mp.find(key)==mp.end()){
	           mp[key]=value;
	       }
	       else{
	           mp[key]++;
	       }
	   }
	   int count=0;
	    map<int,int>::iterator it;
	    for(it=mp.begin();it!=mp.end();++it)
	    {
	        int x=it->second;
	      if(x%2==0)
	      {
	          count++;
	          break;
                //cout<<it->first<<endl;
	      }
	    }
	    if(count>0)
	    {
	        cout<<it->first<<endl;
	    }
	    else 
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}