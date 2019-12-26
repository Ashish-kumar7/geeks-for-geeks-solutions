Node * lca(Node* root ,int v1 ,int v2 )
{
        if(root==NULL)
        {
            return NULL;
        }
        if(root->data==v1 || root->data==v2)
        {
            return root;
        }
        Node * left=lca(root->left,v1,v2);
        Node * right=lca(root->right,v1,v2);
        if(left!=NULL & right!=NULL)
        {
            return root;
        }
        if(left==NULL & right==NULL)
        {
            return NULL;
        }
        if(left!=NULL)
        {
            return left;
        }
        return right ;
}
