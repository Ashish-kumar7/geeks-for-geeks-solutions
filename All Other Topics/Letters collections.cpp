class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        int p=0;
        vector<int>vec;
        while(q--){
            
            int x=queries[p][0];
            int i=queries[p][1];
            int j=queries[p][2];
            p++;
            
            if(x==1){
                int sum=0;
                if(i+1<n && j<m){
                    sum+=mat[i+1][j];
                   // cout<<sum<<endl;
                }
                if(i-1>=0 && j<m){
                    sum+=mat[i-1][j];
                   // cout<<sum<<endl;
                }
                
                if(i<n && j+1<m){
                    sum+=mat[i][j+1];
                   // cout<<sum<<endl;
                }
                if(i<n && j-1>=0){
                    sum+=mat[i][j-1];
                   // cout<<sum<<endl;
                }
                ////////////////////////////////////////////////////
                if(i+1<n && j+1<m){
                    sum+=mat[i+1][j+1];
                  //  cout<<sum<<endl;
                }
                if(i+1<n && j-1>=0){
                    sum+=mat[i+1][j-1];
                  // cout<<sum<<endl;
                }
                if(i-1>=0 && j+1<m){
                    sum+=mat[i-1][j+1];
                   // cout<<sum<<endl;
                }
                if(i-1>=0 && j-1>=0){
                    sum+=mat[i-1][j-1];
                   // cout<<sum<<endl;
                }
              //  cout<<sum<<endl;
                vec.push_back(sum);
            }
            
            else if(x==2){
                int sum=0;
                if(i-2>=0 && j-2>=0){
                    sum+=mat[i-2][j-2];
                }
                if(i-1>=0 && j-2>=0){
                    sum+=mat[i-1][j-2];
                }
                if(j-2>=0){
                    sum+=mat[i][j-2];
                }
                if(i+1<n && j-2>=0){
                    sum+=mat[i+1][j-2];
                }
                if(i+2<n && j-2>=0){
                    sum+=mat[i+2][j-2];
                }
                
                if(i+2<n && j-1>=0){
                    sum+=mat[i+2][j-1];
                }
                if(i+2<n){
                    sum+=mat[i+2][j];
                }
                if(i+2<n && j+1<m){
                    sum+=mat[i+2][j+1];
                }
                if(i+2<n && j+2<m){
                    sum+=mat[i+2][j+2];
                }
                ////////////////////////////////
                
                if(i-2>=0 && j+2<m){
                    sum+=mat[i-2][j+2];
                }
                if(i-1>=0 && j+2<m){
                    sum+=mat[i-1][j+2];
                }
                if( j+2<m){
                    sum+=mat[i][j+2];
                }
                if(i+1<n && j+2<m){
                    sum+=mat[i+1][j+2];
                }
                // if(i+2<n && j+2<m){
                //     sum+=mat[i+2][j+2];
                // }
                
                if(i-2>=0 && j-1>=0){
                    sum+=mat[i-2][j-1];
                }
                
                // if(i-2>=0 && j-1>=0){
                //     sum+=mat[i-2][j-1];
                // }
                if(i-2>=0){
                    sum+=mat[i-2][j];
                }
                if(i-2>=0 && j+1<m){
                    sum+=mat[i-2][j+1];
                }
                
                
               vec.push_back(sum);
                
            }
            
        }
        
       return vec; 
    }
};