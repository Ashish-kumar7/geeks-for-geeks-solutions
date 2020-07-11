bool rowwisesahiplacekiya(int board[][9],int row,int num){
    for(int i=0;i<9;i++){
        if(board[row][i]==num){
            return 0;
        }
    }
    return 1;
}

bool colwisesahiplacekiya(int board[][9],int col,int num){
    for(int i=0;i<9;i++){
        if(board[i][col]==num){
            return 0;
        }
    }
    return 1;
}

bool boxwisesahiplacekiya(int board[][9],int row,int col,int num,int n){
    
    int p=sqrt(n);
    int rowstart=row-row%p;
    int colstart=col-col%p;

    for(int i=rowstart;i<rowstart+p;i++){
        for(int j=colstart;j<colstart+p;j++){
            if(board[i][j]==num){
                return 0;
            }
        }
    }
    return 1;
}

bool placecorrectkiyeho(int board[][9],int row, int col,int num,int n){
    if(!rowwisesahiplacekiya(board,row,num)){
       return 0; 
    }
    if(!colwisesahiplacekiya(board,col,num)){
       return 0; 
    }
    if(!boxwisesahiplacekiya(board,row,col,num,n)){
       return 0; 
    }
    return 1;
}

bool sudokusolver(int board[][9],int n){
    
    int row=-1;
    int col=-1;
    int istrue=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0){
                row=i;
                col=j;
                istrue=1;
                break;
            }
        }
        if(istrue==1){
            break;
        }
    }
    
    if(istrue==0){
        return 1;
    }
    
    //row
    //col
    
    for(int num=1;num<=n;num++){
        if(placecorrectkiyeho(board,row,col,num,n)){
            board[row][col]=num;
            if(sudokusolver(board,n)){
                return 1;
            }
            board[row][col]=0;
        }
    }
    return 0;
    
}


bool SolveSudoku(int grid[N][N])  { 
    // Your code here
    
    return sudokusolver(grid,N);
    
    
}

void printGrid (int grid[N][N]) 
{
    // Your code here 
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
    }
}