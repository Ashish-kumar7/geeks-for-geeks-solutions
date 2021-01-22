class Solution{
public:
	
	int countSubstr (string S)
	{
	    // your code here
	    int count=0;
	    for(int i=0;i<S.length();i++){
	        if(S[i]=='1'){
	                count++;
	        }
	        
	    }
	    return count*(count-1)/2;
	}
};