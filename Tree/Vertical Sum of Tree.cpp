void sumofverticalnodes(Node * root,int weight,map<int,int> &mp){
    if(root==NULL){
        return ;
    }
    mp[weight]=mp[weight]+root->data;
    sumofverticalnodes(root->left,weight-1,mp);
    sumofverticalnodes(root->right,weight+1,mp);
}
void printVertical(Node *root){
    map<int,int>mp;
    int weight=0;
    int value;
    sumofverticalnodes(root,weight,mp);
    map<int,int>:: iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        cout<<it->second<<" ";
    }
}
