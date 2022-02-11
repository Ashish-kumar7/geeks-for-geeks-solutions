int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<S.length();i++){
            if(S[i]>='0' && S[i]<='9'){
                st.push(S[i]-'0');
            }
            else{
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                if(S[i]=='+'){
                    st.push(y+x);
                }
                if(S[i]=='-'){
                    st.push(y-x);
                }
                if(S[i]=='*'){
                    st.push(y*x);
                }
                if(S[i]=='/'){
                    st.push(y/x);
                }
            }
        }
        return st.top();
    }