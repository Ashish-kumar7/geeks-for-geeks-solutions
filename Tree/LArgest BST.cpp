
bool isbst(Node *root,int max,int min)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->data <min || root->data >max)
    {
        return 0;
    }
    return isbst(root->left,root->data,min) && isbst(root->right,max,root->data);
}

int size(Node * root)
{
   if(root==NULL)
   {
       return 0;
   }
   return size(root->left) + size(root->right)+1;
}


int largestBst(Node *root)
{
	if(isbst(root,10000,-1))
	{
	    return size(root);
	}
	return max(largestBst(root->left),largestBst(root->right));
}
