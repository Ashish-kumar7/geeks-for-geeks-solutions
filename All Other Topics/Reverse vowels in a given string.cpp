#include<bits/stdc++.h>
using namespace std;
int main()
 {
	 int t;
	  cin>>t;
	 while(t--)
	   {
	       cin>>ws;
	       string str;
	       getline(cin,str);
	       string vo;
	       for(int i=0;i<str.length();i++)
	             if(str[i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u')
	               vo.push_back(str[i]);
	       int j=vo.length()-1;
	    for(int i=0;i<str.length();i++)
	     {
	         if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
	             {
	                 str[i]=vo[j];
	                 j--;
	             }
	     }
	    cout<<str<<endl;
	   }
	return 0;
}