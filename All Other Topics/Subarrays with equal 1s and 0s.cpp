long long int countSubarrWithEqualZeroAndOne(int arr[], int n){
    map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mp[sum]++;
    }
    int count=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second > 1){
            count+=( (it->second) * (it->second -1 )/2);
        }
        if(it->first==0){
            count+=(it->second);
        }
    }
    return count;
}