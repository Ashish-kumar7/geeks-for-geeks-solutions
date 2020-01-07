Node* insert(Node* node, int data){
    if(node==NULL){
        return  new Node(data);
    }
    if(data>node->data){
        node->right=insert(node->right,data);
    }
     if(data<node->data){
        node->left=insert(node->left,data);
    }
    return node;
}
