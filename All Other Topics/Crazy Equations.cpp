#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int testcases;
	cin>>testcases;
	vector<int> ans;
	for(int i=0;i<testcases;i++)
	{
	    int n,a,b,c,d;
	    cin>>n>>a>>b>>c>>d;
	     int x,y,z,w;
    int t1 = b-c;
    int t2 = a-d;
    int cnt = 0;
    for(x=1;x<=n;x++)
    {
        y = x - t1;
        w = x - t2;
        z = y - t2;
        if(y>=1 && y<=n && w>=1 && w<=n && z>=1 && z<=n)
            cnt++;
    }
	    ans.push_back(cnt);
	}
	for(auto x : ans)
	    cout<<x<<endl;
	return 0;
}