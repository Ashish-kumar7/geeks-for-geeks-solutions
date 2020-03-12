#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num;
cin>>num;
while(num--)
{
string str;
string text;
cin>>str;
cin>>text;
sort(text.begin(),text.end());
int count=0;
for(int i=0;i<=str.length()-text.length();i++)
{
string s=str.substr(i,text.length());
sort(s.begin(),s.end());
if(s==text)
count++;
}
cout<<count<<endl;
}
return 0;
}