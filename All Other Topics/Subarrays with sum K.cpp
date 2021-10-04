class Solution{
    public:
    int findSubArraySum(int Arr[], int n, int k){
       unordered_map<int,int>mp;
       int sum=0;
       int ans=0;
       for(int i=0;i<n;i++){
            sum+=Arr[i];
            if(sum==k){
                ans++;
            }
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
       }
        return ans;
    }
};