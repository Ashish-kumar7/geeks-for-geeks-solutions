class Solution {
  public:
  set<vector<int>>s;
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        vector<vector<int>> res;
        vector<int> v;
        vector<int> visited(arr.size());
        backtrack(res,visited,arr,v);
        for(auto it:s)
            res.push_back(it);
        return res;
        // code here
    }
     void backtrack(vector<vector<int>> &res,vector<int> &visited,vector<int>& nums,vector<int> &v)
    {
      if(v.size()==nums.size())
      {
          s.insert(v);
          return;
      }
	  
        for(int i=0 ; i<nums.size();i++)
        {
           if(visited[i]==1) continue;
           else
           {
            v.push_back(nums[i]);
            visited[i]=1;
            backtrack(res,visited,nums,v);
            v.pop_back();
            visited[i]=0;
           }
        }
    }
};
