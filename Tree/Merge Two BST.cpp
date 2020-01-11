
void inorder(Node * root,vector<int>&C)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left,C);
    C.push_back(root->data);
    inorder(root->right,C);
}
void merge(Node *root1, Node *root2)
{
   vector<int>A;
   vector<int>B;
   inorder(root1,A);
   inorder(root2,B);
   int y=A.size();
   int z=B.size();
   int h=y+z;
   vector<int>D(h);
   merge(A.begin(), A.end(), B.begin(), B.end(), D.begin());
   sort(D.begin(),D.end());
   for(int i=0;i<D.size();i++)
   {
       cout<<D[i]<<" ";
   }
}
