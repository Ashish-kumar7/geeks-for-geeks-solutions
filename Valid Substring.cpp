int findMaxLen(string s) {
        // code here
        
        stack<int>S;
        
        int n=s.length();
        
        int ans=0;
        
        S.push(-1);
        
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                S.push(i);
            }else{
                if(!S.empty()){
                    S.pop();
                }
                if(!S.empty()){
                    ans=max(ans,(i-S.top()));
                }
                else{
                    S.push(i);
                }
            }
        }
        
        return ans;
    }