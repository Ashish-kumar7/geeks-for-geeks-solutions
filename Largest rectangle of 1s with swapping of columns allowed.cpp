int maxArea(vector<bool> mat[], int r, int c) {
	    // code here
	    int dp[r][c];
	    
	    for(int j=0;j<c;j++){
	        vector<int> v;
	        if(mat[r-1][j])
	            v.push_back(1);
	        else
	            v.push_back(0);
	        for(int i=r-2;i>=0;i--){
	            if(mat[i][j])
	                v.push_back(v[v.size()-1]+1);
	            else
	                v.push_back(0);
	        }
	        reverse(v.begin(),v.end());
	        for(int i=0;i<r;i++)
	            dp[i][j]=v[i];
	    }
	    
	    
	    int sortedDp[r][c];
	    for(int i=0;i<r;i++){
	        vector<int> v;
	        for(int j=0;j<c;j++)
	            v.push_back(dp[i][j]);
	        sort(v.begin(),v.end());
	        reverse(v.begin(),v.end());
	        for(int j=0;j<c;j++)
	            sortedDp[i][j]=v[j];
	    }
	   
	    int maxRect=INT_MIN,curr;
	    for(int i=0;i<r;i++){
	        int j=0;
	        while(j<c && sortedDp[i][j]>0)
	            maxRect=max(maxRect,(j+1)*sortedDp[i][j++]);
	    }
	    
	    return maxRect;
	    
	}