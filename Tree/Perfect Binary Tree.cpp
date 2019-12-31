int height(Node* node)  {  
    if (node == NULL) {
        return 0;
    }
        int lDepth = height(node->left);  
        int rDepth = height(node->right);  
        if (lDepth > rDepth){
         return(lDepth + 1);  
        }
         return(rDepth + 1);
}     
int size(Node* node)  {  
    if (node == NULL){
         return 0;  
    }
     return(size(node->left) + 1 + size(node->right));  
}

bool isPerfectRec(struct Node* root, int d, int level ){
int x=height(root);
int y=size(root);
int z=pow(2,x);
int ss=z-1;
if(ss==y){
    return 1;
}
return 0;
}
