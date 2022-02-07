 int shortestPath( int x, int y){ 
        // code here 
         int r=0;
   while(x!=y)
   {
       if(x>y)
       x/=2;
       else
       y/=2;
       r++;
   }
   return r;
    }