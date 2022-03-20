int solve(Node * root,int * ans){
   if(root==NULL){
       return INT_MAX;
   }
   
   if(root->left==NULL && root->right==NULL)return root->data;
   
   int val=min(solve(root->left,ans),solve(root->right,ans));
   
   *ans=max(*ans,root->data -  val);
   
   return min(val,root->data);
   
}

int maxDiff(Node* root)
{
    if(root==NULL)return 0;
    int ans=INT_MIN;
   int x=  solve(root,&ans);
   
   return ans;
}