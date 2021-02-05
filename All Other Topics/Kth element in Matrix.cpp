int kthSmallest(int mat[MAX][MAX], int n, int k){
  priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
  for(int i=0;i<n;i++){
      pq.push(make_pair(mat[i][0],make_pair(i,0)));
  }
  while(!pq.empty()){ 
      k--;
      pair<int,pair<int,int>> temp = pq.top();
      pq.pop();
      if(k==0){
          return temp.first;
      }
      int iarr = temp.second.first;
      int iele = temp.second.second;
      if(iele<n-1){
          pq.push(make_pair(mat[iarr][iele+1],make_pair(iarr,iele+1)));
      }
  }
  return -1;
}
