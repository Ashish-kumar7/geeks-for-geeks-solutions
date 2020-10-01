int findLongestConseqSubseq(int A[], int n){
  int max_count=0;
  int count=0;
  sort(A,A+n); for(int i=0;i<n-1;i++){
      if(A[i]==A[i+1]){
          
      }
      else  if(A[i+1]==A[i]+1){
          count++;
          max_count=max(max_count,count);
      }
      else{
          count=0;
          max_count=max(max_count,count);
      }
  }
  return max_count+1;
}