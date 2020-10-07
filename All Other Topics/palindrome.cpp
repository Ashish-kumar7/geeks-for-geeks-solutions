class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string x=to_string(n);
		    for(int i=0;i<x.length()/2;i++){
		        if(x[i]!=x[x.length()-1]){
		            return "No";
		        }
		    }
		    return "Yes";
		}
};