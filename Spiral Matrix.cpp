lass Solution{

	public:
	int findK(vector<vector<int>> &matrix, int n, int m, int k)
    {
        // Your code goes here
         int temp=m;
        m=n;
        n=temp;
        
         int r=0;
        int c=0;
        int count=0;
        vector<int>ans(m*n);
        
        while(r<m && c<n){
            for(int i=c;i<n;i++){
                ans[count++]=matrix[r][i];
            }
            r++;
            for(int i=r;i<m;i++){
                ans[count++]=matrix[i][n-1];
            }
            n--;
            
            if(r<m){
                    for(int i=n-1;i>=c;i--){
                    ans[count++]=matrix[m-1][i];
                }
                m--;
            }
            if(c<n){
                for(int i=m-1;i>=r;i--){
                    ans[count++]=matrix[i][c];
                }
                c++;
            }   
        }
        
        return ans[k-1];
    }

};