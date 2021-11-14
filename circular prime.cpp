int checkPrime(int n) {
	    for(int i=3;i<=sqrt(n);i+=2) {
	        if(n%i==0) return 0;
	    }
	    return 1;
	}
	
	int isCircularPrime(int n) {
	    // Code here
	    if(n==1) return 0;
	    if(n==2) return 1;
	    int temp=n;
	    int d=0;
	    while(temp>0) {
	        if(temp%2==0) return 0;
	        temp/=10;
	        d++;
	    }
	    int q=pow(10,d-1);
	    for(int i=0;i<d;i++) {
	        if(!checkPrime(n)) return 0;
	        int rem=n%10;
	        n=n/10;
	        n=(q*rem)+n;
	    }
	    return 1;
	}
};
