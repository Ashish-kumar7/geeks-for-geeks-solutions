
int aa (struct Node *root, int target)
{
    if(root==NULL)
     {
         return 0;
     }
     if(root->data==target)
     {
         return 1;
     }
     if(aa(root->left,target) || aa(root->right,target) )
     {
         cout<<root->data<<" ";
         return 1;
     }
     return 0;
}


bool printAncestors(struct Node *root, int target)
{
     aa(root,target);
    cout<<endl;
     return 1;
}

