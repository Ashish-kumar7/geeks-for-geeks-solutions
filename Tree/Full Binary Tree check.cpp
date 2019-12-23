
int height_of_tree(Node * root)
{
    if (root==NULL)
    {
        return 0;
    }
    int ldepth=height_of_tree(root->left);
    int rdepth =height_of_tree(root->right);
    if(ldepth>rdepth)
    {
        return ldepth+1;
    }
    return rdepth+1;
}
int number_of_leaves_of_tree(Node *root)
{
   if(root==NULL)
   {
       return 0;
   }
   if(root->left==NULL && root->right==NULL)
   {
       return 1;
   }
    return number_of_leaves_of_tree(root->left) + number_of_leaves_of_tree(root->right);
}
bool isFullTree (struct Node* root)
{
Node * current =root;
Node * current2=root;
int height=height_of_tree(current);
int count_leaves =number_of_leaves_of_tree(current2);
int x=pow(2,(height-1));
if(x==count_leaves)
{
    return 1;
}
return 0;
}
