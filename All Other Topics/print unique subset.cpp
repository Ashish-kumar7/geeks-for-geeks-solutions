#include<bits/stdc++.h>
using namespace std;

set<string> ss;
set<string>::iterator it;
void solve(string s,string op)
{
	if(s.length()==0)
	{
		ss.insert(op);
		return;
	}
	string op1=op;
	string op2=op;
	op2.push_back(s[0]);
	s.erase(s.begin()+0);	
	solve(s,op1);
	solve(s,op2);
	return;
}
int main()
{
	string s,op;
	cin>>s;
	op="";
	cout<<" ";
	solve(s,op);
	for(it=ss.begin();it!=ss.end();it++)
	{
		cout<<*it<<" ";
	}	
}
