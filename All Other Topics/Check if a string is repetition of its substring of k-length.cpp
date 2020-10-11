class Solution{
public:
	int kSubstrConcat (int n, string s, int k){
	    if(n%k!=0){
	        return 0;
	    }
	     unordered_map<string,int>mp;
	     for(int i=0;i<n;i+=k){
	         mp[s.substr(i,k)]++;
	     }
	     if(mp.size()>2){
	         return 0;
	     }
	     if(mp.size()==1){
	         return 1;
	     }
	    auto it=mp.begin();
	         if(it->second > 1){
	             it++;
	             if(it->second >1){
	                 return 0;
	             }
	         }
	     return 1;
	}
};