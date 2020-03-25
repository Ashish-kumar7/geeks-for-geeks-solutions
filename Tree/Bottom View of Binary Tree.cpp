
void view(Node * root,int hd,int depth,map<int,pair<int,int>>&mp){
    if(root==NULL){
        return ;
    }
    if(mp.find(hd)==mp.end()){
        mp[hd]=make_pair(root->data,depth);
    }
    else if(mp[hd].second <=depth){
        mp[hd]=make_pair(root->data,depth);
    }
    view(root->left,hd-1,depth+1,mp);
    view(root->right,hd+1,depth+1,mp);
}

void bottomView(Node *root)
{
   // Your Code Here
   int hd=0;
   int depth=0;
   map<int,pair<int,int>>mp;
   view(root,hd,depth,mp);
   map<int,pair<int,int>>:: iterator it;
   
   for(it=mp.begin();it!=mp.end();it++)
   {
       cout<<(it->second).first<<" ";
    }

return ;
}