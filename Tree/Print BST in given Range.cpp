void printNearNodes(Node *root, int l, int h)
{
  // your code goes here   
  if(root==NULL)
  {
      return ;
  }
  
  printNearNodes(root->left,l,h);
  if(root->data>=l && root->data<=h)
  {
      cout<<root->data<<" ";
  }
  printNearNodes(root->right,l,h);
}
