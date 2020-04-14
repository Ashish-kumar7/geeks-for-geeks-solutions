
int maxLen(int A[], int n) {
    int sum=0;
    int max_len=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(sum==0 && max_len==0){
            max_len=1;
        }
        if(sum==0){
            max_len=i+1;
        }
        if(mp.find(sum)!=mp.end()){
            
            max_len=max(max_len,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
    }
    return max_len;
}
