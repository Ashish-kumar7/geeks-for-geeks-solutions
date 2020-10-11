int max_sum(int A[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
        }
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=( A[i] * i );
        }
        int res=0;
        for(int i=1;i<=n;i++){
           int  next=curr-(sum-A[i-1]) + A[i-1]*(n-1);
           curr=next;
           res=max(res,curr);
        }
        return res;
    }