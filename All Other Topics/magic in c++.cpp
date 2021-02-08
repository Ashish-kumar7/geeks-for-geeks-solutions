void swap(int *x, int *y){
    
    // Your code here
     
   int temp;
   temp = *x; /* save the value at address x */
   *x = *y; /* put y into x */
   *y = temp;
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
    A=A+B;
    B=A-B;
    A=A-B;
  
}