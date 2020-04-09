#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   int A[n];
	    queue<int>Q;
	    for(int i=1;i<=n;i++){
	        Q.push(i);
	    }
	    for(int i=1;i<=n;i++){
                int jj=i;
	        while(jj--)
	        {
	            int x=Q.front();
                Q.push(x);
	            Q.pop();

	        }
            int pl=Q.front();
          //  cout<<pl<<" ";
	        A[pl-1]=i;
	        Q.pop();
	    }

	    for(int i=0;i<n;i++)
	    {
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
