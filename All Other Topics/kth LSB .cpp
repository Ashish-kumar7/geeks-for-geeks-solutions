class Solution{
public:	
	
	int KthLSB(long long int n, int k){
	    //complete the function here
	    k=k-1;
	    while(k--){
	        n=n>>1;
	    }
	    //cout<<n<<endl;
	    
	    if((n & 1) == 0){
	        return 0;
	    }
	    return 1;
	}
};