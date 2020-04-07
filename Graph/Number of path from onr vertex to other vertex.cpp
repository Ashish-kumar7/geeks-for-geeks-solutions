#include <bits/stdc++.h>
using namespace std;

int visited[100];

void countingedges(int x,int y,vector<int>A[],int & total_value){
     visited[x]=1;
    if(x==y){
        total_value++;
    }
   else{
            for(int k=0;k<A[x].size();k++){
        if(visited[A[x][k]]==0){
           countingedges(A[x][k],y,A,total_value);
        }
    }
   }
    visited[x]=0;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int vertex,edge;
	    cin>>vertex;
	    cin>>edge;
	    vector<int>A[vertex];

	    //int visited[100];

	    for(int i=0;i<100;i++){
            visited[i]=0;
        }
	    while(edge--){
	        int a,b;
	       cin>>a;
	       cin>>b;
	       A[a-1].push_back(b-1);
	    }
	    int x,y;
	    cin>>x;
	    cin>>y;
	    int total=0;
	  countingedges(x,y,A,total);
	  cout<<total<<endl;
	}
	return 0;
}
