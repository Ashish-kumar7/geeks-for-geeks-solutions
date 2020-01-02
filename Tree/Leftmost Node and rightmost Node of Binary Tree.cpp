

void printCorner(Node *root){
queue<Node *>q;
q.push(root);
vector<int>vec;
while(!q.empty()){
    int n=q.size();
    for(int i=0;i<n;i++){
       Node *p=q.front();
       q.pop();
       if(i==0){
       vec.push_back(p->key);
       }
       else if(i==n-1){
       vec.push_back(p->key);
       }
       if(p->left!=NULL){
           q.push(p->left);
       }
       if(p->right!=NULL){
           q.push(p->right);
       }
    }
  }
      for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
