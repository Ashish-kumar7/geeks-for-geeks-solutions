void levelOrder(Node* node)
{
  //Your code here
  queue<Node *>q1;
  queue<Node *>q2;
  
  if(node!=NULL)
  {
      q1.push(node);
  }
  
  while(!q1.empty() || !q2.empty())
  {
      while(!q1.empty())
      {
          Node * temp=q1.front();
          q1.pop();
          cout<<temp->data<<" ";
          
         if(temp->left!=NULL)
        {
             q2.push(temp->left);
        }
        
        if(temp->right!=NULL)
        {
            q2.push(temp->right);
        }
          
      }
      while(!q2.empty())
      {
          Node * temp=q2.front();
          q2.pop();
          cout<<temp->data<<" ";
          
         if(temp->left!=NULL)
        {
             q1.push(temp->left);
        }
        
        if(temp->right!=NULL)
        {
            q1.push(temp->right);
        }
          
      }
      
      
      
      
  }
  
  
  
  
  
  
  
}