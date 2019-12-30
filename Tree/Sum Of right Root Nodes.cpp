void right_root_sum(Node *root,int &sum){
    if(root==NULL){
        return;
    }
    if(root->right!=NULL && root->right->left==NULL && root->right->right==NULL){
        sum=sum+(root->right)->data;
    }
    right_root_sum(root->right,sum);
    right_root_sum(root->left,sum);
}
int rightLeafSum(Node* root){
    int sum=0;
    right_root_sum(root,sum);
    return sum;
}
