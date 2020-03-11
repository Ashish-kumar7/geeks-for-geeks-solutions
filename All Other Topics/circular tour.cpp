int tour(petrolPump p[],int n){
   int start=0;
   int capacity=0;
   int deficit =0;
   for(int i=0;i<n;i++){
       capacity+=p[i].petrol-p[i].distance;
       if(capacity<0){
           start=i+1;
           deficit+=capacity;
           capacity=0;
       }
   }
   if(capacity+deficit>0){
       return start;
   }
   else {
       return -1;
   }
}