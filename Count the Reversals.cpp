int countRev (string s){
    stack<char>S;
    int n=s.length();
    if(n%2!=0)return -1;
    for(int i=0;i<n;i++){
        if(s[i]=='}'  && !S.empty()){
            if(S.top()=='{')S.pop();
            else S.push(s[i]);
        }else S.push(s[i]);
    }
    float count1=0;
    float count2=0;
    while(!S.empty()){
        char a=S.top();
        S.pop();
        if(a=='{')count1++;
        else count2++;
    }
    return ceil(count1/2) + ceil(count2/2);
}