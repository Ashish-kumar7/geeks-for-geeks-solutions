#include<bits/stdc++.h>
using namespace std;


bool issafe(int i,int j,int n,int dp[][10]){
    
    for(int x=0;x<i;x++){
        if(dp[x][j]==1){
            return 0;
        }
    }
    int x=i;
    int y=j;
    
    while(x>=0 && y>=0){
        if(dp[x][y]==1){
            return 0;
        }
        x--;
        y--;
        
    }
    
    x=i;
    y=j;
    
    while(x>=0 && y<n){
        if(dp[x][y]==1){
            return 0;
        }
        x--;
        y++;
        
    }
    
    return 1;
    
}

vector<vector<int>>AA;

bool solvenqueen(int n,int dp[][10],int i){
    
    if(i==n){
        
        vector<int>BB;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                if(dp[i][j]==1)
                BB.push_back(j);
                //cout<<dp[i][j]<<" ";
            }
           // cout<<endl;
        }
        
        AA.push_back(BB);
        
        return 1;
    }
    
    
    for(int j=0;j<n;j++){
        
        if(issafe(i,j,n,dp)){
            
            dp[i][j]=1;
            
            bool checker=solvenqueen(n,dp,i+1);
            if(checker){
                return 1;
            }
            
            dp[i][j]=0;
        }
    }
    return 0;
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[10][10];
	    
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            A[i][j]=0;
	        }
	    }
	    
	    
	    solvenqueen(n,A,0);
	    
	   for(int l=0;l<AA.size();l++){ 
    	    for(int k=0;k<AA[l].size();k++){
    	        cout<<AA[l][k]<<" ";
    	    }
    	    cout<<endl;
	   }
	    
	    
	
	}
	return 0;
}