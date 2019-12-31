
int height(Node *node)
{
    if (node==NULL)
    {
        return 0;
    }
    int x=height(node->left);
    int y=height(node->right);
    
    if(x<y)
    {
        x=y;
    }
            
   
    return 1+ x; 
    
}
int diameter(Node* node)
{
   // Your code here
   if(node==NULL)
   {
       return 0;
   }
   int lheight=height(node->left);
   int rheight=height(node->right);
   int ldaimeter=diameter(node->left);
   int rdaimeter=diameter(node->right);
   int p=lheight+rheight+1;
   if(ldaimeter<rdaimeter)
   {
       ldaimeter=rdaimeter;
   }
   
   if(p<ldaimeter)
   {
       p=ldaimeter;
   }
   return p;
   
}


