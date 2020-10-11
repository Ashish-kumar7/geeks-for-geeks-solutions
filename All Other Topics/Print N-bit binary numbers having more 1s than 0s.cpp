class Solution{
public:	


void printRec(string number, int extraOnes, int remainingPlaces,vector<string>&ans) 
{ 
    if (0 == remainingPlaces) { 
       // cout << number << " ";
        ans.push_back(number);
        return; 
    } 
  
    printRec(number + "1", extraOnes + 1, remainingPlaces - 1,ans); 
  
    if (0 < extraOnes)  
        printRec(number + "0", extraOnes - 1,  remainingPlaces - 1,ans);     
} 

void printNums(int n,vector<string>&ans) 
{ 
    string str = ""; 
    printRec(str, 0, n,ans); 
} 


	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string>ans;
	    printNums(n,ans);
	    return ans;
	    
	}
};