int atoi(string str)
{
    //Your code here
    
    stringstream geek(str);
    int x=0;
    geek>>x;
    
    int u=str.length();
    int count=0;
    int y=x;
    if(y<0)
    {
        count=1;
    }
    
    while(x!=0)
    {   
        count++;
        x=x/10;
        
    }
    
    if(count==u)
    {
        return y;
    }
    
    return -1;
}