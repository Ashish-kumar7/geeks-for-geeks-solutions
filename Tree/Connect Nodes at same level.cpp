
void connect(Node *root){
   Node * temp= new Node(-10);
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       int n =q.size();
       q.push(temp);
       for(int i=0;i<n;i++){
           Node * p=q.front();
            q.pop();
            if(q.front()!=temp){
                p->nextRight=q.front();
            }
            else {
                p->nextRight=NULL;
                q.pop();
            }
            if(p->left!=NULL){
                q.push(p->left);
            }
           if(p->right!=NULL){
               q.push(p->right);
           }
       }
   }
}


