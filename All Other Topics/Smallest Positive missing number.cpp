int missingNumber(int B[], int n) {
    int A[n+2];
    for(int i=0;i<n+2;i++){
        A[i]=0;
    }
    for(int i=0;i<n;i++){   
        if(B[i]>0 && B[i]<n+2){
            A[B[i]]++;
        }
    }
    for(int i=1;i<n+2;i++){
        if(A[i]==0){
            return i;
        }
    }
} 