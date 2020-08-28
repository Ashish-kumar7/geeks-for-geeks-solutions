string reverseWords(string s) { 
    stack<string>S;
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            S.push(temp);
            temp="";
        }
        if(s[i]!='.'){
            temp+=s[i];
        }
    }
    S.push(temp);
    string ans1="";
    while(!S.empty()){
        ans1+=S.top();
        S.pop();
        if(!S.empty()){
            ans1+='.';    
        }
    }
    return ans1;
} 