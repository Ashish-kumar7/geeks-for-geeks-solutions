
void printExtremeNodes(Node *root){
queue<Node *>q;
q.push(root);
vector<int>vec;
int flag=0;
while(!q.empty()){
    int n=q.size();
    for(int i=0;i<n;i++){
       Node *p=q.front();
       q.pop();
       if(i==0 && flag==1){
       vec.push_back(p->data);
       }
       else if(i==n-1 && flag==0){
       vec.push_back(p->data);
       }
       if(p->left!=NULL){
           q.push(p->left);
       }
       if(p->right!=NULL){
           q.push(p->right);
       }
    }
    flag=1-flag;
  }
      for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
