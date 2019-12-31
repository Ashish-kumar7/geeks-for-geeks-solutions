
int getlevel(Node*root,int x,int level){
    if(root==NULL){
        return 0;
    }
    if(root->data==x){
        return level;
    }
    int gl;
      gl=getlevel(root->left,x,level+1);
    if(gl!=0){
        return gl;
    }  
     return getlevel(root->right,x,level+1);
}
int getthelevel(Node *root,int x){
    int level=1;
    return  getlevel(root,x,level);
}
int isSibling(struct Node *root, int aa1,int bb1) { 
    if (root==NULL) {
        return 0; 
    }
    if( root->right!=NULL && root->left!=NULL &&  root->left->data==aa1 && root->right->data==bb1){
        return 1;
    }
    if(root->right!=NULL &&root->left!=NULL && root->right->data==aa1 && root->left->data==bb1 ){
        return 1;
    }
    if(root->right!=NULL){
        isSibling(root->right,aa1,bb1);
    }
    if(root->left!=NULL){
        isSibling(root->left,aa1,bb1);
    }
}
bool isCousins(Node *root, int x1, int y1){
   int a=getthelevel(root,x1);
   int b=getthelevel(root,y1);
   int c=isSibling(root,x1,y1);
   if(a==b){
       if(c==0){
           return 1;
       }
   }
       return 0;
}
