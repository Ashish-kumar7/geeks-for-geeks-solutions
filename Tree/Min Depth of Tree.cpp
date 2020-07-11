int minDepth(Node *node) {
    // Your code here
    
    if(node==NULL){
        return 0;
    }
    
    if(node->right==NULL && node ->left==NULL){
        return 1;
    }
    
    if(node->left==NULL){
        return minDepth(node ->right) +1;
    }
    
    if(node->right==NULL){
        return minDepth(node ->left) +1 ;
    }
    
    return min(minDepth(node->left) ,minDepth(node->right))+1;
}