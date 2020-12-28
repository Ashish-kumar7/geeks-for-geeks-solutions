bool isLucky(int n, int &counter) {
    if(counter>n)
        return true;
    if(n%counter==0)
        return false;
    n=n-n/counter;    
    return isLucky(n,++counter); 
    
}