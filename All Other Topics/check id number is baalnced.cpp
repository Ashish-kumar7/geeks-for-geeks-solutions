class Solution{
public:	
	bool balancedNumber(string str)
	{
	    // code here
	    int n=str.length();
	    int x=n;
	    n=n/2;
	    
	    int sum1=0;
	    int sum2=0;
	    for(int i=0;i<n;i++){
	        sum1+=(str[i]-'0');
	        sum2+=(str[x-i-1]-'0');
	    }
	    return sum1==sum2;
	}
};