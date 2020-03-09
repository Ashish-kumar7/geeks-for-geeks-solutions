#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	
	int l=s.length();
	string h;
	vector<string>A;
	int i=0;
	while(l--){
	    if(s[i]!='.')
	    {
	        h.push_back(s[i]);
	        i++;
	        if(l==0)
	        {
	            A.push_back(h);
	        }
	    }
	    else if(s[i]=='.')
	    {
	        A.push_back(h);
	        h.clear();
	        i++;
	        
	    }
	    
	}
	
    for(int i=A.size()-1;i>=0;i--)
    {
        cout<<A[i];
        if(i!=0)
        {
            cout<<".";
        }
    }
	
	cout<<endl;
	}
	return 0;
}