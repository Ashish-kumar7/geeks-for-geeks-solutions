int height(Node* node)
{
   // Your code here
   if(node== NULL)
   {
       return 0;
   }
   
   int lsize=height(node->left);
   int rsize=height(node->right);
   
   return max(lsize,rsize)+1;
   
   
   
}
