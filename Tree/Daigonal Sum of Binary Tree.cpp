
void fillingofmap(Node * root,int dd,map<int,int>&mp){
    if(root==NULL){
        return;
    }
    mp[dd]=mp[dd]+(root->data);
    fillingofmap(root->left,dd-1,mp);
    fillingofmap(root->right,dd,mp);
    return;
}
void diagonalSum(Node* root) {
    // Add your code here
    int dd=0;
    int value;
    map<int,int>mp;
    
    fillingofmap(root,dd,mp);
    map<int,int>::iterator it;
    stack<int>sq;
    for(it=mp.begin();it!=mp.end();++it)
    {
        sq.push(it->second);
    }
    while(!sq.empty())
    {
        cout<<sq.top()<<" ";
        sq.pop();
    }
    cout<<endl;
    return;
}