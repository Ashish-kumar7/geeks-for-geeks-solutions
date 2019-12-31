void fillingofmap(Node * root,int depth,int level,map<int,pair<int,int>>&mp){
    if(root==NULL){
        return;
    }
    if(mp.find(depth)==mp.end()){
        mp[depth]=make_pair(root->data,level);
    }
    else if(mp[depth].second<=level){
        mp[depth]=make_pair(root->data,level);
    }
    fillingofmap(root->left,depth-1,level+1,mp);
    fillingofmap(root->right,depth+1,level+1,mp);
}
void bottomView(struct Node *root){
    map<int,pair<int,int>>mp;
    int depth=0;
    int level=0;
    fillingofmap(root,depth,level,mp);
    map<int,pair<int,int>>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<(it->second).first<<" ";
    }
    return;
}

