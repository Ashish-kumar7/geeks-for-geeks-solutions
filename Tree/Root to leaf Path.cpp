  void inorder(Node *root,vector<int>&vec){
     if(root==NULL){
         return ;
     }
        vec.push_back(root->data);
     if(root->left==NULL && root->right==NULL){
         for(int y=0;y<vec.size();y++){
             cout<<vec[y]<<" ";
         }
         cout<<"#";
     }
     inorder(root->left,vec);
     inorder(root->right,vec);
      //vector<int>::iterator it; 
    // it = vec.end(); 
     vec.erase(vec.end()-1 );
 }
 
void printPaths(Node* root){
    if(root==NULL){
        return ;
    }
    vector<int>vec;
    inorder(root,vec);
    cout<<endl;
    return ;
}
