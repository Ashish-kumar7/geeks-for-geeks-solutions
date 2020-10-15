using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unordered_map<int,int>m;
	    int a,b,ans=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        m[a]=b;
	    }
	    bool vis[31]={0};
	    queue<pair<int,int>>q;
	    q.push(make_pair(1,0));
	     pair<int,int>p;
	    while(!q.empty())
	    {
	       p=q.front();
	        int v=p.first;
	        q.pop();
	        if(v==30)
            {
                ans=1;
                break;
            }
	                
	        for(int k=v+1;k<=v+6 && k<=30;k++)
	        {
	            if(vis[k]==0)
	            {
	                vis[k]=1;
	                if(m[k]!=0)
	                {
	                    q.push(make_pair(m[k],p.second+1));
	                }
	               else
	                q.push(make_pair(k,p.second+1));
	               
	            }
	        }
	      
	    }
	    cout<<p.second<<endl;
	}
	return 0;
}