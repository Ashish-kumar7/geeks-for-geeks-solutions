
int geeting_the_difference(Node * root)
{
   if(root==NULL)
   {
       return 0;
   }
    
    return root->data-geeting_the_difference(root->left)-geeting_the_difference(root->right);
    
    
}
int getLevelDiff(Node *root)
{
   //Your code here
   return geeting_the_difference(root);
}
