struct Box{
    int l;
    int b;
    int h;
};
int min(int a,int b){
    return (a<b)?a:b;
}
int max(int a,int b){
    return (a>b)?a:b;
}
int compare (const void *a, const void * b) { 
    return ( (*(Box *)b).l * (*(Box *)b).b ) -
          ( (*(Box *)a).l * (*(Box *)a).b ); 
}
int solver(Box A[],int n){
    Box B[3*n];
    int index=0;
    for(int i=0;i<n;i++){
        B[index].h=A[i].h;
        B[index].l=max(A[i].l , A[i].b );
        B[index].b=min(A[i].l , A[i].b);
        index++;
        B[index].h=A[i].l;
        B[index].l=max(A[i].h , A[i].b );
        B[index].b=min(A[i].h , A[i].b);
        index++;
        B[index].h=A[i].b;
        B[index].l=max(A[i].l , A[i].h );
        B[index].b=min(A[i].l , A[i].h);
        index++;
    }
    n = 3*n;
  qsort (B, n, sizeof(B[0]), compare); 
    int msh[n]; 
  for (int i = 0; i < n; i++ ){
      msh[i] = B[i].h; 
  }
    for (int i = 1; i < n; i++ ){
      for (int j = 0; j < i; j++ ){
         if ( B[i].l < B[j].l && B[i].b < B[j].b && msh[i] < msh[j] + B[i].h ){ 
              msh[i] = msh[j] + B[i].h; 
         } 
      }
    }
  int max = -1; 
  for ( int i = 0; i < n; i++ ){ 
      if ( max < msh[i] )
         max = msh[i]; 
  }
  return max;
}

int maxHeight(int height[],int breadth[],int length[],int n)
{
    //Your code here
    
    Box arr[n];
    for(int i=0;i<n;i++){
        arr[i].l=length[i];
        arr[i].b=breadth[i];
        arr[i].h=height[i];
    }
    return solver(arr,n);
}