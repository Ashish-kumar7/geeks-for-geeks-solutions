
void printKdistance(Node *root, int k)
{
  // Your code here
  if(root==NULL)
  {
      return ;
  }
  if(k==0)
  {
      cout<<root->data<<" ";
  }
  printKdistance(root->left,k-1);
  printKdistance(root->right,k-1);
  return ;
}
