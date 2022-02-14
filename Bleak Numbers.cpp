int count(int n){
        int c=0;
	    while(n>0){
	        if(n&1==1) c++;
	        n=n>>1;
	        
	    }
        return c;
        
    }
	int is_bleak(int n)
	{
	    // Code here.
	    
	    for(int i=0;i<n;i++){
	        if(i+count(i)==n) return 0;
	        
	    }
	    return 1;
	    
	}