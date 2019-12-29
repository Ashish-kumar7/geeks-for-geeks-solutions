void right_iteration(Node *root,int level,int *max_level){
    if(root==NULL){
        return ;
    }
    if(*max_level<level){
        cout<<root->data<<" ";
        *max_level=level;
    }
        right_iteration(root->right,level+1,max_level);

    right_iteration(root->left,level+1,max_level);
}
void rightView(Node *root){
   int max_level=0;
   right_iteration(root,1,&max_level);
   return ;
}
