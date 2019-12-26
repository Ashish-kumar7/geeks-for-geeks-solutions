int getMaxWidth(Node* node)
{

  //Your code here
  if(node==NULL)
  {
      return 0;
  }
  queue<Node *>q;
  q.push(node);
  int result=0;
  
  while(q.empty()==0)
  {
      
        int count=q.size();
      
      if(result<count)
      {
          result=count;
      }
      
     // result=max(result,count);
      
      while(count--)
      {
          
      
      Node * naya=q.front();
      q.pop();

      if(naya->left!=NULL)
      {
          q.push(naya->left);
      }
    if(naya->right!=NULL)
      {
          q.push(naya->right);
      }
       }
}
return result;
}
