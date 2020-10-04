#include<iostream>
#include<bits/stdc++.h>

using namespace std;


long long int uglyNo(int x){
    
   long long int ugly[x] ;
   long long int i2 = 0 , i3 = 0 , i5 = 0 , i , j ;
   long long  int next_mul_2 = 2 ;
   long long int next_mul_3 = 3 ;
long long int next_mul_5 = 5 ;
    
   long long  int next=1;
  //  int ugly[n] ; 
    ugly[0] = 1 ;
    
    for(i=1;i<x;i++){
         next = min(min(next_mul_2 , next_mul_3) , next_mul_5) ;
        
        ugly[i] = next ;
        
        if(next == next_mul_2){
            i2++ ;
            next_mul_2 = ugly[i2] * 2 ;
        }
         if(next == next_mul_3){
            i3++ ;
            next_mul_3 = ugly[i3] * 3 ;
        }
       if(next == next_mul_5){
            i5++ ;
            next_mul_5 = ugly[i5] * 5 ;
        }
    }
    
    return next ;
}

int main()
 {
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    cout << uglyNo(n) << "\n" ;
	}
	
	return 0;
}