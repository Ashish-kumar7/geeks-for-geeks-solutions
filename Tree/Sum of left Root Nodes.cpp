


void left_root_sum(Node *root,int &sum){
    if(root==NULL){
        return;
    }
    if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
        sum=sum+(root->left)->data;
    }
    left_root_sum(root->left,sum);
    left_root_sum(root->right,sum);
}
int leftLeafSum(Node* root){
    int sum=0;
    left_root_sum(root,sum);
    return sum;
}
