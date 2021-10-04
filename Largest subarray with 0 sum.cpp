class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        
        map<int,int>mp;
        
        int sum=0;
        
        int count=0;
        
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
                count=max(count,i+1);
            }
            else if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            
            else{
                count=max(count,i-mp[sum]);
            }
        }
        
        return count;
    }
};
