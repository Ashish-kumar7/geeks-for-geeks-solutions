int Pathofsum(Node *root,int & result){
    if(root==NULL){
        return 0;
    }
   int left=Pathofsum(root->left,result);
   int right=Pathofsum(root->right,result);
   int greaterofthem=max((max(left,right)+root->data),root->data);
   int greatervalue=max(greaterofthem,root->data+left+right);
   result=max(result,greatervalue);
   return greaterofthem;
}
int maxPathSum(struct Node *root){
int result=INT_MIN;
Pathofsum(root,result);
return result;
}
