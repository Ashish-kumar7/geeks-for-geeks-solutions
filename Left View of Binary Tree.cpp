void solve(Node * root,vector<int>&ans,int level,int * max_level){
    
    if(root==NULL){
        return;
    }
    
    if( *max_level<level){
        ans.push_back(root->data);
        * max_level=level;
    }
    
   solve(root->left,ans,level+1,max_level);
   solve(root->right,ans,level+1,max_level);
}


vector<int> leftView(Node *root){
   
   vector<int>ans;
   int max_level=0;
   
   solve(root,ans,1,&max_level);
   
   return ans;
   
}