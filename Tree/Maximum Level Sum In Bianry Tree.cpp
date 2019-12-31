int maxLevelSum(Node * root)
{
   //Your code here
   if(root==NULL)
{
    return 0;
}

queue<Node*>q;
q.push(root);
    int result=root->data;

while(!q.empty())
{
int sum= 0;
int count=q.size();
  while(count--)
  {
      Node *p=q.front();
      q.pop();
      sum=sum+p->data;
      if(p->left!=NULL)
      {
              q.push(p->left);
      }
if(p->right!=NULL)
      {
              q.push(p->right);
      }  
      
  }
    if(result<sum)
    {
        result=sum;
    }
    
}
