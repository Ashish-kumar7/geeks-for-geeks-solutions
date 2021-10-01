#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(ll i=0;i<n;i++)
#define fa(i,a,b) for(ll i=a;i<=b;i++)
#define fr(i,n) for(ll i=n-1;i>=0;i--)
#define endl "\n"
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ms(array,value) memset(array,value,sizeof(array))
#define test(t) ll t;cin>>t;while(t--)
#define en cout<<endl;
#define mod 1000000007
#define mod2  998,244,353
#define pb push_back
#define all(a) a.begin(),a.end()
#define mp make_pair
#define ff first
#define ss second
#define tr(it, v) for(auto it = v.begin(); it != v.end(); it++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
const int N = 3e5;
vi g[N];
void graph(int n,int m)
{
    int u, v;
    while(m--){
        cin>>u>>v;
        --u,--v;
        g[u].pb(v);
        g[v].pb(u);
    }
}
long long qpow(long long a, long long b)
{
    long long ans=1;
    while(b)
    {
        if(b&1) ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}

bool DetectArmstrongNumber(int x)
{
    int n = 0;
    int temp = x;
    while (temp)
    {
        n++;
        temp /= 10;
    }

    int sum = 0;
    temp = x;
    while (temp)
    {
        int r = temp%10;
        sum += qpow(r, n);
        temp = temp/10;
    }
    if(sum == x) return 1;
    else return sum;
}

int main()
{
    sync
    test(t)
    {
    }
}
