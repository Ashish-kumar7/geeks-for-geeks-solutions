int getId(int M[MAX][MAX], int N){
    int Matrix[N][N+1];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            Matrix[i][j]=M[i][j];
        }
    }
    for(int i=0;i<N;i++){   
        int sum=0;
        for(int j=0;j<N;j++){
            sum+=Matrix[i][j];    
        }
        Matrix[i][N]=sum;
    }
    int count=0;
    int mark;
    for(int i=0;i<N;i++){
        if(Matrix[i][N]==0){
            mark=i;
            count++;
        }
    }
    if(count==1){
        return mark;
    }
    else {
        return -1;
    }
}