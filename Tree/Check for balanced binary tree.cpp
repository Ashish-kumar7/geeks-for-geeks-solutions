 
int height(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int x=height(root->left);
    int y =height(root->right);
    if(x<y)
    {
        x=y;
    }
    return 1+ x;
    }

bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)
    {
        return 1;
    }
    int lt=height(root->left);
    int rt=height(root->right);
    
    if(abs(lt-rt)<=1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return 1;
    }
    
    return 0;
}
