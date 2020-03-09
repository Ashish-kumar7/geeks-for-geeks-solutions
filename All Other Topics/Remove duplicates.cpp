#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	string b;
	getline(cin,b);
	while(t--){
	string a;
	getline(cin,a);

	 map<char,int>mp1;
	int l=a.length();
	int i=0;
	char key;
	int value=0;
	vector<char>V1;

	while(l--)
	{
	   key=a[i];
	   if(mp1.find(key) == mp1.end()){
	       
	       mp1[key]=value;
	       
	       V1.push_back(key);
	      
	   }
	   i++;
	}
	for(int i=0;i<V1.size();i++)
{
    cout<<V1[i];
}
 cout<<endl;
	}
	
	return 0;
}