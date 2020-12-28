// problem - https://practice.geeksforgeeks.org/problems/alien-dictionary/1
// difficulty - hard

//User function Template for C++
/*The function should return a string denoting the 
order of the words in the Alien Dictionary */
#define pb push_back
void topo(int num,int vis[],vector <int> v[],stack <int> &s)
{
	vis[num]=1;
	for(auto it:v[num])
	{
		if(!vis[it])
		{
			topo(it,vis,v,s);
		}
	}
	s.push(num);
}
string printOrder(string dict[], int N, int k)
{
   //Your code here
   int n=N;
   string s[n];
   for(int i=0;i<N;i++)
   {
       s[i]=dict[i];
   }
   vector <int> v[26];
	for(int i=0;i<n-1;i++)
	{
		int mn=min(s[i].size(),s[i+1].size());
		for(int j=0;j<mn;j++)
		{
			if(s[i][j]!=s[i+1][j])
			{
				v[s[i][j]-'a'].pb(s[i+1][j]-'a');
				break;
			}
		}
	}
	int vis[k]={};
	stack <int> sa;
	for(int i=0;i<k;i++)
	{
		if(!vis[i])
		{
			topo(i,vis,v,sa);
		}
	}
	string res="";
	while(!sa.empty())
	{
		//cout<<char(sa.top()+'a');
		res+=char(sa.top()+'a');
		sa.pop();
		
	}
	return res;  
}