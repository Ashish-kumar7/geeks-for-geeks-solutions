long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        for(int i=0;i<n;i++){
            if(arr[i]==0)arr[i]=-1;
        }
        
        
        int sum=0;
        unordered_map<int,int>mp;
        int val=0;
        
        for(int i=0;i<n;i++){
            val+=arr[i];
            mp[val]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>1){
                sum+=( (it->second)* ((it->second)-1)/2);
            }
            if(it->first==0){
                sum+=it->second;
            }
        }
        return sum;
        
    }
};