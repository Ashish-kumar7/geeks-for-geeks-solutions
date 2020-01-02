

void preorderreverse(Node *root1, Node *root2,int level){
    if(root1==NULL || root2==NULL){
        return ;
    }
    if(level%2==0){
        int h=root1->data;
        root1->data=root2->data;
        root2->data=h;
    }
    preorderreverse(root1->left,root2->right,level+1);
    preorderreverse(root1->right,root2->left,level+1);    
    return ;
}
void reverseAlternate(Node *root){
    if(root==NULL){
        return;
    }
    int level=2;
    preorderreverse(root->left,root->right,level);
    return;
}
