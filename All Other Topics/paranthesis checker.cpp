    bool ispar(string x)
    {
        // Your code here
        stack<char>S;
        for(int i=0;i<x.length();i++){
            if(x[i]=='{' || x[i]=='[' || x[i]=='('){
                S.push(x[i]);
                continue;
            }
           
           if(S.empty()){
	            return 0;
	        }
	        else if(S.top()=='{' && ( x[i]==')' || x[i]==']') ){
	            return 0;
	        }
	        
	        else if(S.top()=='[' && ( x[i]==')' || x[i]=='}') ){
	            return 0;
	        }
	        
	        else if(S.top()=='(' && ( x[i]==']' || x[i]=='}') ){
	            return 0;
	        }
            else{
                S.pop();
            }
        }if(S.empty()){
            return 1;
        }
        return 0;
}