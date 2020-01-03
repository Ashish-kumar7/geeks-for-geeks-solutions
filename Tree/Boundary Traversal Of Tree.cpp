void printtheleaves(Node * root){
    if(root==NULL){
        return ;
    }
    printtheleaves(root->left);
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printtheleaves(root->right);
    return ;
}
void printleftnodes(Node * root){
    if(root==NULL){
        return ;
    }
    if(root->left!=NULL){
       cout<<root->data<<" ";
       printleftnodes(root->left);
    }
    else if(root->right!=NULL){
       cout<<root->data<<" ";
       printleftnodes(root->right);
    }
    return;
}
void printrightnodes(Node * root){
    if(root==NULL){
        return ;
    }
    if(root->right!=NULL){
     printrightnodes(root->right);
       cout<<root->data<<" ";
    }
    else if(root->left!=NULL){
       printrightnodes(root->left);
       cout<<root->data<<" ";
    }
    return;
}
void printBoundary(Node *root){
     cout<<root->data<<" ";
     printleftnodes(root->left);
     printtheleaves(root);
     printrightnodes(root->right);
}