#include<bits/stdc++.h> 
using namespace std; 

bool SieveOfEratosthenes(int n, bool isPrime[]) 
{ 
    
    isPrime[0] = isPrime[1] = false; 
    for (int i=2; i<=n; i++) 
        isPrime[i] = true; 
  
    for (int p=2; p*p<=n; p++) 
    {  
        if (isPrime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                isPrime[i] = false; 
        } 
    } 
} 
  
void findPrimePair(int n) 
{ 
    bool isPrime[n+1]; 
    SieveOfEratosthenes(n, isPrime); 
  
    for (int i=0; i<n; i++) 
    { 
        if (isPrime[i] && isPrime[n-i]) 
        { 
            cout << i << " " << (n-i); 
            return; 
        } 
    } 
} 
 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        findPrimePair(n); 
        cout<<endl;
    }
  
    return 0; 
} 