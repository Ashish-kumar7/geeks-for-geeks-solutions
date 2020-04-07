
int _stack :: getMin(){
    if(s.empty()){
        return -1;
    }
        return s.top();
}

/*returns poped element from stack*/
int _stack ::pop(){
    int x;
    if(s.empty()){ 
    return -1;
    }
    else{ 
        s.pop();
        x=s.top();
        s.pop();
    if(!s.empty())
    minEle = s.top();
    return x;
    }
}


/*push element x into the stack*/
void _stack::push(int x){
    if(s.empty()){ 
    s.push(x);
    minEle=x;
    s.push(minEle);
    }
else{
    s.push(x);
    if(x < minEle)
        minEle = x;
    s.push(minEle);
}

}
