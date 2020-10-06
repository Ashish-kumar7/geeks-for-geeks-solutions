#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    string s;
	    cin>>s;
	    int c=0;
	    int v=0;
	    priority_queue<char,vector<char>,greater<char>>c1;
	    priority_queue<char,vector<char>,greater<char>>v1;
	    for(int j=0;j<n;j++)
	    {
	        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
	        {
	            v=v+1;
	            v1.push(s[j]);
	        }
	        else
	        {
	            c=c+1;
	            c1.push(s[j]);
	        }
	    }
	    if(abs(v-c)>1)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        if(v>=c)
	        {
	            while(!v1.empty() && !c1.empty())
	            {
	            cout<<v1.top()<<c1.top();
	            v1.pop();
	            c1.pop();
	            }
	            if(!v1.empty())
	            {
	                cout<<v1.top();
	                v1.pop();
	            }
	        }
	        else
	        {
	           while(!v1.empty() && !c1.empty())
	            {
	            cout<<c1.top()<<v1.top();
	            v1.pop();
	            c1.pop();
	            }
	            if(!c1.empty())
	            {
	                cout<<c1.top();
	                c1.pop();
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}