
void inorder(Node * root ,vector<int>&C)
{
    if(root==NULL){
        return;
    }
    inorder(root->left,C);
    C.push_back(root->data);
    inorder(root->right,C);
}
void printCommon(Node *root1, Node *root2){
     vector<int>A;
     vector<int>B;
     inorder(root1,A);
     inorder(root2,B);
     vector<int>D;
     for(int i=0;i<A.size();i++)     {
         for(int j=0;j<B.size();j++)         {
             if(A[i]==B[j])             {
                 D.push_back(A[i]);
             }
         }
     }
     sort(D.begin(),D.end());
     for(int k=0;k<D.size();k++)     {
         cout<<D[k]<<" ";
     }
}
