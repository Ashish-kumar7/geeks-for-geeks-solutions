bool subArrayExists(int arr[], int n){
    int A[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        A[i]=sum;
    }
    map<int,int>mp;
    int key;
    int value=0;
    for(int i=0;i<n;i++){
        key=A[i];
        mp[key]++;
    }
    map<int,int>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++){ 
        if((it->first)==0){
        return 1;
    }
        if((it->second)>1){
        return 1;
        }
    }
    return 0;
}