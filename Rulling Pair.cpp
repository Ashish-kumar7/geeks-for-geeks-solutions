class Solution{
    
    int val(int x){
        int sum=0;
        
        while(x>0){
            sum+=(x%10);
            x=x/10;
        }
        
        return sum;
    }
    
    public:
    int RulingPair(vector<int> arr, int n) 
    { 
    	// Your code goes here
    	
    	unordered_map<int,vector<int>>mp;
        
        for(auto it : arr){
            int temp=val(it);
            mp[temp].push_back(it);
        } 
        
        int maxi=-1;
        
        for(auto it=mp.begin();it!=mp.end();it++){
            vector<int>val=it->second;
            if(val.size()>1){
                sort(val.begin(),val.end());
                int sum=0;
                sum+= (  val[val.size()-1] + val[val.size()-2] );
                maxi=max(maxi,sum);
            }
            
        }
    	
    	return maxi;
    }   
};