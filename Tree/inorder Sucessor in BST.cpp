void findingout(Node * root,vector<Node*>&A){
    if(root==NULL){
        return ;
    }
    findingout(root->left,A);
    A.push_back(root);
    findingout(root->right,A);
}
Node * inOrderSuccessor(Node *root, Node *x){
    vector<Node*>A;
    findingout(root,A);
    Node * p=NULL;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]==x){
            p=A[i+1];
            break;
        }
    }
    return p;
}
