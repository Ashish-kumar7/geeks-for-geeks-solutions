#define ll long long int
#define f(i,n) for(ll i=0;i<n;i++)
#define fab(i,a,b) for(ll i=a;i<=b;i++)
#define frev(i,n) for(ll i=n-1;i>=0;i--)
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ms(array,value) memset(array,value,sizeof(array))
#define test(t) ll t;cin>>t;while(t--)
#define en cout<<endl;
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define pp pop_back
#define all(v) v.begin(),v.end()

using namespace std;
int r[8] = {-1,1,-1,0,1,-1,0,1};
int c[8] = {0,0,1,1,1,-1,-1,-1};
int vis[8][8];
void find(string w, char**a,int len, int n,int m, int i, int j,string t,set<string>&v)
{
    vis[i][j]=1;
    if(len==1){v.insert(t);return;}
    
    for(int k=0;k<8;k++){
        
        if(i+r[k]<0 || i+r[k]>=n || j+c[k]<0 || j+c[k]>=m) continue;
        if(a[i+r[k]][j+c[k]]==w[1] && vis[i+r[k]][j+c[k]]==0){
            find(w.substr(1),a,len-1,n,m,i+r[k],j+c[k],t,v);
            break;
        }
    }
    //vis[i][j]=0;
    return;
}
int main()
{
    test(t)
    {
        int x;
        cin>>x;
        string s[x];
        f(i,x)cin>>s[i];
        int n,m,c=0;
        cin>>n>>m;
        char **a=new char *[n];
        
        set<string>v;
        f(i,n)
        {a[i]=new char[m];
        
            f(j,m){cin>>a[i][j];vis[i][j]=0;}
        }
        f(i,x)
        {int flag=0;
        memset(vis,0,sizeof(vis));
            f(j,n)
            {
                f(k,m)
                {
                    if(a[j][k]==s[i][0])
                    {
                        find(s[i],a,s[i].size(),n,m,j,k,s[i],v);
                        if(v.size()==c+1)
                        {++c;flag=1;break;}
                    }
                }
                if(flag==1)break;
            }
        }
        for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
        if(v.empty())cout<<"-1";
        cout<<endl;
        
    }
}