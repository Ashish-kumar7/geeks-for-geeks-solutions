class Solution{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	unordered_map<int,int>mp;
        	stack<pair<char,int>>St;
        	
        	for(int i=0;i<s.length();i++){
        	    if(s[i]=='['){
        	        St.push({s[i],i});
        	    }
        	    else if(s[i]==']'){
        	        pair<char,int>pp=St.top();
        	        St.pop();
        	        mp[pp.second]=i;
        	    }
        	}
        	return mp[pos];
        }
};