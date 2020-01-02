
void filling_the_map(Node *root,int hd,map<int,vector<int>>&mp)
{
     if(root==NULL){
         return ;
     }
     mp[hd].push_back(root->data);
    if(root->left!=NULL){
    filling_the_map(root->left,hd-1,mp);
    }
    if (root->right!=NULL){
      filling_the_map(root->right,hd+1,mp);
    }
    return ;
}
void verticalOrder(Node *root){
    if(root==NULL){
        return ;
    }
    map<int,vector<int>>mp;
    int hd=0;
    filling_the_map(root,hd,mp);
    map<int,vector<int>>:: iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        for(int i=0;i<it->second.size();++i){
            cout<<it->second[i]<<" ";
        }
    }
    return ;
}

