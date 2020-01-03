bool checkingit(Node *root,int min,int max){
    if(root==NULL){
        return 1;
    }
    if(root->data<min || root->data>max){
        return 0;
    }
  return  ( checkingit(root->left,min,root->data) &&
    checkingit(root->right,root->data,max) );
}
bool isBST(Node* root) {
    int min=-100;
    int max=1000;
  return   checkingit(root,min,max);
}
