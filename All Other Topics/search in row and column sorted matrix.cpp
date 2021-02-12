bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    int i=0;
    int j=m-1;
    int flag=0;
    while(i<n && j>=0){
            if(matrix[i][j]<x){
                i++;
            }
            else if(matrix[i][j]>x){
                j--;
            }
            else if(matrix[i][j]==x){
                flag=1;
                break;
            }
        }
        
        if(flag==1){
            return 1;
        }
        else{
            return 0;
        }
}
