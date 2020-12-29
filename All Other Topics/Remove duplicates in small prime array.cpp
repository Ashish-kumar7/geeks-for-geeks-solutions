vector<int> removeDuplicate(vector<int>& arr, int n)
{
    // code here
    vector<int>ans;
    map<int,int>mp;
    
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]++;
            ans.push_back(arr[i]);
        }
    }

    return ans;
    
}