#include<bits/stdc++.h>
using namespace std;

bool solve(char maze[10][10],int ans[][10],int m,int n,int i,int j){
    if(i==m && j==n){
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return 1;
    }
    
    if(maze[i][j]=='X'){
        return 0;
    }
    if(i>m || j>n){
        return 0;
    }
    
    ans[i][j]=1;
    int rightsuc=solve(maze,ans,m,n,i,j+1);
    int leftsuc=solve(maze,ans,m,n,i+1,j);
    
    ans[i][j]=0;
    
    if(rightsuc && leftsuc){
        return 1;
    }
    
    return 0;
    
}

int main(){
    int n;
    int m;
    n=4;
    m=4;
    char maze[10][10]={
        "0000",
        "00X0",
        "000X",
        "0X00"
    };
    
    int ans[10][10]={0};
    bool temp=solve(maze,ans,m-1,n-1,0,0);
    
	return 0;
}