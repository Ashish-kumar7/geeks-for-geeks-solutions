int sumreturn (int val){
     int summ=0;
     while(val>0){
         summ+=(val%10);
         val=val/10;
     }
     return summ;
 }
int RulingPair(vector<int> arr, int n) {
    map<int,priority_queue<int>>mp;
    for(int i=0;i<n;i++){
        mp[sumreturn(arr[i])].push(arr[i]);
    }
    int flag=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second.size()>1){
            flag=1;
        }
    }
    if(flag==0){
        return -1;
    }
    int max_sum=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        int sum=0;
        if(it->second.size()>1){
            sum=sum+it->second.top();
            it->second.pop();
            sum+=it->second.top();
        }
        if(max_sum<sum){
            max_sum=sum;
        }
    }
    return max_sum;
}