
int maxNodeLevel(Node *root){
 queue<Node*>q;
 q.push(root);
 int max=0;
 int level=0;
 int pqw;
 while(!q.empty()){  
     level++;
     int size=q.size();
     if(size>max){
         max=size;
        pqw=level;
     }
     while(size--){
        Node * p=q.front();
        q.pop();
        if(p->left!=NULL){
         q.push(p->left);
        }
        if(p->right!=NULL){
         q.push(p->right);
        }
     }
 }
 return pqw-1;
}
