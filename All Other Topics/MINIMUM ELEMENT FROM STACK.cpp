stack<int>s2;
    
int _stack :: getMin(){
    
    if(s2.empty())
    {
        return -1;
    }
    if(!s2.empty())
    {
        return s2.top();
    }    
    
}

int _stack ::pop(){
        if(!s.empty() && !s2.empty() && s.top()==s2.top()){
            s2.pop();
        }
        int x;
        if(!s.empty() )
        {
         x=s.top();
        s.pop();
        return x;
        }
        return -1;
         
}
void _stack::push(int x){
   if(s.empty()){
            s.push(x);
            s2.push(x);
        }
        else {
            if(!s2.empty() && x<s2.top()){
                s2.push(x);
            }
            s.push(x);
        }
}