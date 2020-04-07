#include<bits/stdc++.h>
using namespace std;
int A[101][101];
vector<int>B[101];
int vis[101];
void countutil(int x,int y){
    A[x][y]=1;
    vis[y]=1;
    vector<int>:: iterator it;
    for(it=B[y].begin();it!=B[y].end();it++){
            if(vis[*it]==0)
            countutil(x,*it);
    }
}
void count(int n){
    for(int i=0;i<n;i++){
        for(int i=0;i<101;i++){
	    vis[i]=0;
	}
        countutil(i,i);
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	 for(int i=0;i<=100;i++) vis[i] = 0; // ....................
	for(int i=0;i<=100;i++) B[i].clear();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin>>A[i][j];
	    }
	}
	   for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){       
	        if(A[i][j]==1){
	        B[i].push_back(j);
	        }
	    }
	}
	
	count(n);
	
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cout<<A[i][j]<<" ";
	    }
	}
	cout<<endl;
	}
	return 0;
}