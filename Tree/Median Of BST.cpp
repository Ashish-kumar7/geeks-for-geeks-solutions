void finding(Node * Node ,int n,vector<int>&A){
    if(Node==NULL){
        return;
    }
    finding(Node->left,n,A);
    A.push_back(Node->data);
    finding(Node->right,n,A);
}
float findMedian(struct Node *root,int n)
{
      vector<int>A;
      finding(root,n,A);
      if(n%2!=0){
        int y=(n+1)/2;
        return A[y-1];
      }
      else {
          float u=n/2;
          float h=(n/2)+1;
          float j=A[u-1]+A[h-1];
          float kk=j/2;
          return kk;
      }
      return 0.0;
}
