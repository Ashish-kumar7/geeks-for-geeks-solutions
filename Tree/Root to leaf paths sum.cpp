long long treevalue(Node * root , long long val){
    if(root==NULL){
        return 0;
    }
    val=(val*10) + root->data;
    
    if(root->left==NULL && root->right==NULL){
        return val;
    }
    return treevalue(root->left,val) +treevalue(root->right,val);
}
long long treePathsSum(Node *root){
    long long val=0;
    return treevalue(root,0);
}
