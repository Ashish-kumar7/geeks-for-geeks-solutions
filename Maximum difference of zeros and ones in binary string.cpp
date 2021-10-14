class Solution{
public:	
	int maxSubstring(string s)
	{
	    // Your code goes here
	    int count=0;
	    int maxi=-1;
	    int cnt=0;
	    
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0'){
	            count++;
	        }else{
	            count--;
	            cnt++;
	            if(count<0)count=0;
	        }
	        
	        maxi=max(maxi,count);
	    }
	    
	    if(cnt==s.length())return -1;
	    
	    return maxi;
	}
};