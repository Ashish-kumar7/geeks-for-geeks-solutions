int max_path_sum(int A[], int B[], int n, int m){
    //Your code here
    int sum1=0;
    int sum2=0;
    int result=0;
    
    int i=0;
    int j=0;
    
    while(i<n && j<m){
        if(A[i]<B[j]){
            sum1+=A[i];
            i++;
        }
        else if(A[i]>B[j]){
            sum2+=B[j];
            j++;
        }
        else{
        result += max(sum1, sum2);
            sum1 = sum2 = 0;
            while(i<n && j<m && A[i]==B[j]){
                result += A[i++];
                j++;
            }
        }
    }
    while(i<n){
        sum1+=A[i];
        i++;
    }
    while(j<m){
        sum2+=B[j];
        j++;
    }
    result+=max(sum1,sum2);
    
    return result;
}