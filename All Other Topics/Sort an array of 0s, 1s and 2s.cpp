
void sort012(int A[], int n){
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            count0++;
        }
        else if(A[i]==1){
            count1++;
        }
        else if(A[i]==2){
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        A[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        A[i]=1;
    }
    for(int i=count1+count0;i<n ;i++){
        A[i]=2;
    }
}