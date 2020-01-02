
void printSpiral(Node *root){
    if(root==NULL){
        return ;
    }
    stack<Node*>s1;
    stack<Node *>s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *p=s1.top();
            s1.pop();
            cout<<p->data<<" ";
            if(p->right!=NULL){
                s2.push(p->right);
            }
            if(p->left!=NULL){
                s2.push(p->left);
            }
        }
        while(!s2.empty()){
            Node *e=s2.top();
            s2.pop();
            cout<<e->data<<" ";
            if(e->left!=NULL){
                s1.push(e->left);
            }
            if(e->right!=NULL){
                s1.push(e->right);            
            }
        }
}
      return;   
}
