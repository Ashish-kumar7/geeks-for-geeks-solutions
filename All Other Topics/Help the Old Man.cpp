
#include <bits/stdc++.h>
using namespace std;
void solve(int n,int start,int dest,int help,vector<pair<int,int>>&vec){
    if(n==1){
        // cout<<" Move "<<n<<   " from " << start <<" to " <<  dest <<endl;
         vec.push_back({start,dest});
        return;
    }
    solve(n-1,start,help,dest,vec);
    vec.push_back({start,dest});
    // cout<<" Move "<<n<<   " from " << start <<" to " <<  dest <<endl;
    solve(n-1,help,dest,start,vec);
    
    return ;
    
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    cin>>n;
	    
	    vector<pair<int,int>>vec;
	    solve(m,1,3,2,vec);
	    cout<<vec[n-1].first << " " <<vec[n-1].second<<endl;
	
	}
	return 0;
}