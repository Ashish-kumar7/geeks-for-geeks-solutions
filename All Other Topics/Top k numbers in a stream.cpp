#include<bits/stdc++.h>
using namespace std;
struct comp{
bool operator()(pair<int,int> &a,pair<int,int> &b)
{
    if(a.second==b.second)
    return a.first>b.first;
    return a.second<b.second;
}
};
int main()
 {
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n],i;
        for(i=0;i<n;i++)cin>>a[i];
        unordered_map<int,int> m1;
        
        for(i=0;i<n;i++)
        {
            int l=0;
            m1[a[i]]++;
            
            priority_queue<pair<int,int>,vector<pair<int,int>>,comp> q(m1.begin(),m1.end());
            while(!q.empty()&&l<k)
            {
                cout<<(q.top()).first<<" ";
                q.pop();
                l++;
            }
        }
        cout<<endl;
    }
	return 0;
}