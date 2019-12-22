void mirror(Node* node) 
{
     // Your Code Here
     Node *temp = NULL;
     
     if(node==NULL)
     {
         return ;
     }
     
// cout<<node->data;

temp = node->left;
node->left=node->right;
node->right=temp;

mirror(node->left);
mirror(node->right);
     
}