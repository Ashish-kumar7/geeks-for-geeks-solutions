class Solution{
    void generateNextPalindromeUtil (int num[], int n ) { 
   
    int mid = n/2; 
  
    bool leftsmaller = false; 
  
    int i = mid - 1; 
  
    int j = (n % 2)? mid + 1 : mid; 
  
    while (i >= 0 && num[i] == num[j]) 
        i--,j++; 
  
     
    if ( i < 0 || num[i] < num[j]) 
        leftsmaller = true; 
  
    while (i >= 0) 
    { 
        num[j] = num[i]; 
        j++; 
        i--; 
    } 
  
    if (leftsmaller == true) 
    { 
        int carry = 1; 
        i = mid - 1; 
  
        if (n%2 == 1) 
        { 
            num[mid] += carry; 
            carry = num[mid] / 10; 
            num[mid] %= 10; 
            j = mid + 1; 
        } 
        else
            j = mid; 
  
    
        while (i >= 0) 
        { 
            num[i] += carry; 
            carry = num[i] / 10; 
            num[i] %= 10; 
            num[j++] = num[i--]; 
        } 
    } 
} 

void generateNextPalindrome1( int num[], int n , vector<int>&ans) { 
    int i; 
 
    if( AreAll9s( num, n ) ) 
    { 
        printf( "1 "); 
        for( i = 1; i < n; i++ ) 
            printf( "0 " ); 
        printf( "1" ); 
    } 
  

    else
    { 
        generateNextPalindromeUtil ( num, n  ); 
  
        printArray (num, n, ans); 
    } 
} 
  

int AreAll9s( int* num, int n ) 
{ 
    int i; 
    for( i = 0; i < n; ++i ) 
        if( num[i] != 9 ) 
            return 0; 
    return 1; 
} 
  

void printArray(int arr[], int n,vector<int>&ans) 
{ 
    int i; 
    for (i=0; i < n; i++) 
        ans.push_back(arr[i]);
}     
    

public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    
	    vector<int>ans;
	    generateNextPalindrome1(num,n,ans);
	    return ans;
	}

};