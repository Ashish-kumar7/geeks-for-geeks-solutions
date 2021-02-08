class Solution{
public:
	
	int binaryPalin (long long int N)
	{
	    // Your Code Here
	    string str;
	    while(N>0){
	        if((N &1) ==1 ){
	            str+='1';
	        }
	        else{
	            str+='0';
	        }
	        N=N>>1;
	    }
	    int n=str.length();
	   // cout<<n<<endl;
	    for(int i=0;i<n/2;i++){
	        if(str[i]!=str[n-1-i]){
	            return 0;
	        }
	    }
	    return 1;
	}
};