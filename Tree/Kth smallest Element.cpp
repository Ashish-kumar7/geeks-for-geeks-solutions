void findingtheelement(Node *root,int k,int &count,int &xx){   
    if(root==NULL){
        return ;
    }
    findingtheelement(root->left,k,count,xx);
    count++;
    if(count==k){
        xx=root->data;
    }
   findingtheelement(root->right,k,count,xx);
}
int KthSmallestElement(Node *root, int k){
    int count=0;
    int xx=0;
     findingtheelement(root,k,count,xx);
     return xx;
}
