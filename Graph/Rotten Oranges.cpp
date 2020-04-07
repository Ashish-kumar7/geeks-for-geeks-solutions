#include<bits/stdc++.h>
using namespace std;
class P{
    public:
    int x;
    int y;
};
int r;
int c;
bool isvalid(int i, int j) { 
	return (i >= 0 && j >= 0 && i < r && j < c); 
} 
bool okay(P temp) { 
	return (temp.x == -1 && temp.y == -1); 
} 
int bfs(int A[101][101]){
   P curr; 
   queue<P>Q;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j]==2){
                curr.x=i;
                curr.y=j;
                Q.push(curr);
            }
        }
    }
    curr.x=-1;
    curr.y=-1;
    Q.push(curr);
    int ans=0;
    while(!Q.empty()){
        while( !okay(Q.front()) ){
            curr=Q.front();
            if( isvalid(curr.x+1, curr.y)  && A[curr.x+1][curr.y]==1 ){
                A[curr.x+1][curr.y]=2;
                curr.x++;
                Q.push(curr);
                curr.x--;
            }
            if( isvalid(curr.x, curr.y+1) && A[curr.x][curr.y+1]==1 ){
                A[curr.x][curr.y+1]=2;
                curr.y++;
                Q.push(curr);
                curr.y--;
            }
              if( isvalid(curr.x, curr.y-1) && A[curr.x][curr.y-1]==1 ){
                A[curr.x][curr.y-1]=2;
                curr.y--;
                Q.push(curr);
                curr.y++;
            }
             if( isvalid(curr.x-1, curr.y) && A[curr.x-1][curr.y]==1 ){
                A[curr.x-1][curr.y]=2;
                curr.x--;
                Q.push(curr);
                curr.x++;
            }
           Q.pop();
        }
        P temp=Q.front();
        if(temp.x==-1 && temp.y==-1){
            ans++;
        }
        Q.pop();
        P temp2;
        temp2.x=-1;
        temp2.y=-1;
        if(!Q.empty()){
             Q.push(temp2);
        }
    }
    return ans-1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>r;
	cin>>c;
	int A[101][101];
	for(int i=0;i<r;i++){
	    for(int j=0;j<c;j++){
	        cin>>A[i][j];
	    }
	}
    int kk=bfs(A);
    int count=0;
    for(int l=0;l<r;l++){
        for(int e=0;e<c;e++){
            if(A[l][e]==1){
                count++;
                break;
            }
        }
    }
    if(count==0){
	cout<<kk<<endl;
	}
	else {
	    cout<<-1<<endl;
	}
	}
	return 0;
}