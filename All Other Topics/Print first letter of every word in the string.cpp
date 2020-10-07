class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string str="";
	    
    	   str+=S[0];
	    for(int i=1;i<S.length();i++){
	        if(S[i]==' '){
	            if(i+1!=S.length()){
	                str+=S[i+1];
	            }
	    }	
	    }
	    
	    
	    return str;
	    
	}
};