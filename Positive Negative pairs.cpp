 vector <int> findPairs(int arr[], int n) 
    {
        // code here
        unordered_map<int,int>mp;
       vector<int>ans;
       for(int i=0;i<n;i++){
           mp[abs(arr[i])]+=arr[i];
           if(mp[abs(arr[i])]==0 && arr[i]!=0){
               ans.push_back(-abs(arr[i]));
               ans.push_back(abs(arr[i]));
           }
       }
       
       return ans;
    }