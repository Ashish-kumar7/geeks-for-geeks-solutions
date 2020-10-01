#include <bits/stdc++.h>
using namespace std;
int find_decimal(int n,int d)
{
    string res="";
    
    int integral_part=n/d;
    res+=to_string(integral_part);
    //res+=".";
    
    map<int,int> m;
    int rest_part;
    int rem=n%d;
    if(rem!=0)
    {
         res=res+".";
    }
    while(rem!=0 && (m.find(rem)==m.end()))
    {
        m[rem]=res.length();
        rem=rem*10;
        
         rest_part=rem/d;
       
        res+=to_string(rest_part);
        
        rem=rem%d;
        
    }
    if(rem==0)
    cout<<res<<"\n";
    else
    {
        string resi=res.substr(0,m[rem]);
        string c=res.substr(m[rem]);
        //cout<<res<<"\n";
        resi+="(";
        resi+=c;
        resi+=")";
    cout<<resi<<"\n";
    }
    
    
}
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	 int N,D;
	 cin>>N>>D;
	 find_decimal(N,D);
	}
	return 0;
}