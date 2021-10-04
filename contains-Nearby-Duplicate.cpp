class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            
            
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=i;
            }
            else{
                if(abs(mp[nums[i]]-i)<=k){
                    return 1;
                }
                mp[nums[i]]=i;
            }
            
            
        }
        
        return 0;
    }
};
