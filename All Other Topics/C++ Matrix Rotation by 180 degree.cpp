class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
       if(n%2==0){
            for(int i=0;i<n/2;i++){
                for(int j=0;j<n;j++){
                    swap(matrix[i][j],matrix[n-i-1][n-j-1]);
                }
            }  
       }
        if(n%2!=0){
            for(int i=0;i<=n/2;i++){
                for(int j=0;j<n;j++){
                    swap(matrix[i][j],matrix[n-i-1][n-j-1]);
                }
            }
            
        for(int j=0;j<n/2;j++){
            swap(matrix[n/2][j],matrix[n/2][n-j-1]);
        }
        
    }
        
    }
};