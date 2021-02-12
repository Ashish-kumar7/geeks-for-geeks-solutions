vector<int> TopK(vector<int>& array, int k){
    unordered_map<int,int>mp;
    int n=array.size();
    for(int i=0;i<n;i++){
        mp[array[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto it=mp.begin();it!=mp.end();it++){
        pq.push({it->second,it->first});
    }
    vector<int>ans;
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}