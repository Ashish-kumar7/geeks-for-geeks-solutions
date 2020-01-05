Node* finding_the_lca(Node*root,int a,int b){   
    if(root==NULL){
        return root;
    }
    if (root->data==a || root->data ==b){
        return root;
    }
    Node *left=finding_the_lca(root->left,a,b);
    Node *right=finding_the_lca(root->right,a,b);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left!=NULL){
        return left;
    }
        return right;
}
   int finding_the_height(Node*root,int x,int level){
       if(root==NULL){
           return -1;
       }
       if(root->data==x){
           return level;
       }
       int left=finding_the_height(root->left,x,level+1);
        if(left==-1){
           return  finding_the_height(root->right,x,level+1);
        }
       return left;
   }
int findDist(Node* root, int a, int b){
    Node * temp=finding_the_lca(root,a,b);
    int level=0;
    int d1=finding_the_height(temp,a,level);
    int d2=finding_the_height(temp,b,level);
    return d1+d2;
}
