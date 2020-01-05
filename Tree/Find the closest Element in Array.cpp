
void findingthediff(Node * root, int k,int &min){
    if(root==NULL){
        return ;
    }
    if(root->data==k){
        min=0;
    }
    if(root->data>k){   
        int v=abs((root->data)-k);
        if(min>v){
            min=v;
        }
        findingthediff(root->left,k,min);
    }
    if(root->data<k){   
        int v=abs((root->data)-k);
        if(min>v)
        {
            min=v;
        }
        findingthediff(root->right,k,min);
    }
    return ;
}
int maxDiff(Node *root, int k){
    int min=1000;
     findingthediff(root,k,min);
     return min;
}
