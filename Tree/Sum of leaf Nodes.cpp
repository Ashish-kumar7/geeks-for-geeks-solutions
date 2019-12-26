void sum1(Node *root , int *sum)
{
   if(root==NULL)
    {
        return ;
    }
    if(root->left==NULL && root->right==NULL)
    {
         *sum=*sum+root->data;
    }
     sum1(root->left,sum);
     sum1(root->right,sum);
     
// return sum;
}

int sumLeaf(Node* root)
{
    // Code here
    int sum;
    sum1(root,&sum);
    return sum;
    
}
