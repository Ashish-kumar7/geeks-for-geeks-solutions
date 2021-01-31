int temp[N][N-k+1];
        for(int i=0;i<N;i++){
            int j=0;
            while(j<N-k+1){
                int sum1=0;
                for(int l=j;l<j+k;l++){
                    sum1+=mat[i][l];
                }
                temp[i][j]=sum1;
                j++;
            }
        }
        
        int temp2[N-k+1][N-k+1];
        
        for(int i=0;i<N-k+1;i++){
            int j=0;
            while(j<N-k+1){
                int sum1=0;
                for(int l=j;l<j+k;l++){
                    sum1+=temp[l][i];
                }
                temp2[j][i]=sum1;
                j++;
            }
        }
        
        
        int maxi=INT_MIN;
        
        for(int i=0;i<N-k+1;i++){
            for(int j=0;j<N-k+1;j++){
                maxi=max(maxi,temp2[i][j]);
            }
        }
        
        return maxi;