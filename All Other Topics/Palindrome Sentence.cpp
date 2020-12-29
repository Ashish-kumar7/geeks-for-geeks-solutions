class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    string ans;
	    for(int i=0;i<s.length();i++){
	        if(s[i]<'z' && s[i]>'a'){
	            ans+=s[i];
	        }
	    }
	    
	    for(int i=0;i<ans.length();i++){
	        if(ans[i]!=ans[ans.length()-i-1]){
	            return 0;
	        }
	    }
	    
	    return 1;
	    
	}
};