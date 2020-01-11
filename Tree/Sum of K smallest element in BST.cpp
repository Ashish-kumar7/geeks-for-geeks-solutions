
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n ;
	    cin>>n;
	    int A[n];
	    map<int,int>mp;
	    int key;
	    int value=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>key;
	        mp[key]++;
	    }
	    int x;
	    cin>>x;
	   vector<int>B;
	   
	   map<int, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); ++it){
            B.push_back(it->first);
        }
	   
	   int sum=0;
	   for(int i=0;i<x;i++)
	   {
	       sum=sum+B[i];
	   }
	   cout<<sum<<endl;
	   
	   //B.push_back(mp->first);
	    
	}
	
	
	return 0;
}



