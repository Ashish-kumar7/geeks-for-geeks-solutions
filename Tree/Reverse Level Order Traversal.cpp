
void reversePrint(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *>q;
    q.push(root);
    stack<Node*>sq;
    while(!q.empty()){
        Node *p=q.front();
        sq.push(p);
        q.pop();
        if(p->right!=NULL){
            q.push(p->right);
        }
        if(p->left!=NULL){
            q.push(p->left);
        }
    }
    while(!sq.empty()){
        Node *f=sq.top();
        cout<<f->data<<" ";
        sq.pop();
    }
    return ;
}
