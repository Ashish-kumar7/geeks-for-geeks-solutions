
vector<int>vc;
void print(Node *node )
{
    if(node==NULL)
   {
       return ;
   }
  
   if(node->left!=NULL && node->right ==NULL)
   {
        vc.push_back(node->left->data);       
   }
   if(node->right!=NULL && node ->left==NULL)
   {
        vc.push_back(node->right->data);       
   }
   
   print(node->left);
  
   print(node->right);
   
   return;
   
}


void printSibling(Node* node)
{
   // Your code here
   print(node);
   
   if(vc.size()==0)
    {
        cout<<-1<<" ";
        return ;
    }
    
    sort(vc.begin(),vc.end());
    
    
   
    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<" ";
        
    }
   
   vc.clear();
   return ;
   
}