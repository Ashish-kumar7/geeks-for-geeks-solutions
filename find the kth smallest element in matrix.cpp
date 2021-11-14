int count(int val,int mat[MAX][MAX],int k,int n){
    int count=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        for(;j>=0;j--){
            if(mat[i][j]<=val){
                count+=(j+1);
                break;
            }
        }
    }
    return count;
}
int kthSmallest(int mat[MAX][MAX], int n, int k){
  int l=mat[0][0];
  int r=mat[n-1][n-1];
  while(l<r){
      int mid=(l+r)/2;
      int temp=count(mid,mat,k,n);
      if(k<=temp){
          r=mid;
      }
      else{
          l=mid+1;
      }
  }
  return l;
}