class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        int mat[a][b];
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(i==0 || j==0)mat[i][j]=1;
                
                else {
                    mat[i][j]=mat[i-1][j] + mat[i][j-1];
                }
            }
        }
        
        return mat[a-1][b-1];
    }
};