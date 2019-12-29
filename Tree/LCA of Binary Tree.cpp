

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root==NULL)
   {
       return NULL;
   }
   if(root->data ==n1 || root->data==n2)
   {
       return root;
   }
   Node * left_lca=LCA(root->left,n1,n2);
   Node * right_lca=LCA(root->right,n1,n2);
   if(left_lca!=NULL && right_lca!=NULL)
   {
      return root;
   }
   if(left_lca!=NULL)
   {
       return left_lca;
   }
   return right_lca;
   }
