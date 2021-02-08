void twoDimensional(int** arr,int N){
    
    // Loop to iterate through matrix
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            
            cout<<*(*(arr+i)+j)<<" ";
            
        }
        cout << endl;
    }
    
}