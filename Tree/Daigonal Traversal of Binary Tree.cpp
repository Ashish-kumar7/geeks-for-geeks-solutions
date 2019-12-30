void diagonalPrint(Node *root){
   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
       Node*p;
       p=q.front();
       q.pop();
       if(p==NULL){
           q.push(NULL);
           p=q.front();
           q.pop();
           if(p==NULL){
               break;
           }
       }
        while(p!=NULL){
            cout<<p->data<<" ";
            if(p->left!=NULL){
                q.push(p->left);
            }
            p=p->right;
        }
    }
}