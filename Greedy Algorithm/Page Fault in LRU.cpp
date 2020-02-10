#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int making(int pages[],int n,int capacity)
{
    unordered_set<int>s;
    unordered_map<int,int>map1;
    int pagefault=0;
    
    for(int i=0;i<n;i++)
    {
        if(s.size()<capacity)
        {
            if(s.find(pages[i])==s.end())
            {
                s.insert(pages[i]);
                pagefault++;
            }
            map1[pages[i]]=i;
        }
        
        else 
        {
            if(s.find(pages[i])==s.end())
            {
                int x=INT_MAX;
                int val;
                
                for(auto it=s.begin();it!=s.end();it++)
                {
                    if(map1[*it]<x)
                    {
                        x=map1[*it];
                        val=*it;
                    }
                }
                   s.erase(val);
                   s.insert(pages[i]);
                   pagefault++;
                
            }  
            map1[pages[i]]=i;
        }
    }
  return pagefault;  
}



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
	    int jj;
	    cin>>jj;
	 cout<<   making(A,n,jj);
	 cout<<endl;
	}
	
	
	return 0;
}