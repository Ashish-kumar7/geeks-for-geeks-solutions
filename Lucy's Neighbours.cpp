class Solution{
    
    static bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.first==p2.first)return p1.second < p2.second;
        return p1.first<p2.first;
    }
    
    public:
    
    
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        // Your code goes here 
        vector<pair<int,int>>vec;
        
        for(int i=0;i<n;i++){
            vec.push_back({abs(arr[i]-x),arr[i]});
        }
        
        sort(vec.begin(),vec.end(),comp);
        
        
        vector<int>ans;
        int count=0;
        
        for(int i=0;i<vec.size();i++){
            if(count < k){
                count++;
                
                ans.push_back(vec[i].second);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        
        return ans;
    }  
};