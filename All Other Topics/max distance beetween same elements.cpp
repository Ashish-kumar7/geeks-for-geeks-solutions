int maxDistance(int arr[], int n)
{
//Code here
unordered_map<int,vector<int>>mp;
for(int i=0;i<n;i++){
    mp[arr[i]].push_back(i);
}
int max_diff=0;
for(auto it=mp.begin();it!=mp.end();it++){
    vector<int>temp=it->second;
    sort(temp.begin(),temp.end());
    max_diff=max(temp[temp.size()-1 ] - temp[0]  , max_diff );
}
return max_diff;
}