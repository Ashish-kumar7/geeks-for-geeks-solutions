
void findingtheelement(Node *root,int k,int &count,int &xx){   
    if(root==NULL){
        return ;
    }
    findingtheelement(root->right,k,count,xx);
    count++;
    if(count==k){
        xx=root->key;
    }
   findingtheelement(root->left,k,count,xx);
}

void kthLargest(Node *root, int k)
{
    //Your code here
    int count=0;
    int xx=0;
     findingtheelement(root,k,count,xx);
     cout<< xx<<endl;
}
