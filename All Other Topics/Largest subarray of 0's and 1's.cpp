int maxLen(int A[], int n) {
    // Your code here
    for(int i=0;i<n;i++){
        if(A[i]==0){
            A[i]=-1;
        }
        else {
            A[i]=1;
        }
    }
    map<int,int>mp;
    
    int max_len=0;
    int sum=0;
    
    for(int i=0;i<n;i++){
        
        sum+=A[i];
        
        if(max_len==0 && sum==0){
            max_len=1;
        }
        if(sum==0){
            max_len=i+1;
        }
        
        else if(mp.find(sum)!=mp.end()){
            max_len=max( max_len , i-mp[sum] ) ;
        }
        
        else{
            mp[sum]=i;
        }
    }
    return max_len;
}
