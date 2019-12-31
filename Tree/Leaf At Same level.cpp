bool check(Node *root){
queue<Node*>q;
 q.push(root);
 int level=0;
 int result=-1;
 while(!q.empty()){  
     level++;
     int size=q.size();
     while(size--){
        Node * p=q.front();
        q.pop();
        if(p->left!=NULL){
         q.push(p->left);
        if(p->left->left==NULL && p->left->right==NULL){
           if(result==-1){
               result=level;
           }
           else if(result!=level){
               return 0;
           }
        }
        }
        if(p->right!=NULL){
         q.push(p->right);
        if(p->right->left==NULL && p->right->right==NULL){
           if(result==-1){
               result=level;
           }
           else if(result!=level){
               return 0;
           }
        }
        }
     }
 }
 return 1;
}
