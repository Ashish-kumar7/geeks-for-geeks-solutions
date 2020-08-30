int SumF(int S[], int n) 
{ 
    int sum = 0; 
  
    for (int i = 0; i < n; i++) 
        sum = sum + (S[i] * pow(2, n-i-1)); 
    return sum; 
} 
  
int SumL(int S[], int n) 
{ 
    int sum = 0; 
  
    for (int i = 0; i < n; i++) 
        sum = sum + (S[i] * pow(2, i)); 
    return sum; 
} 
int sumDiff(int S[], int n)
{
    //Your code here
     return SumL(S, n) - SumF(S, n); 
}