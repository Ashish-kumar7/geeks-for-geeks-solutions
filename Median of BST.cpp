
/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void inorder(struct Node *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
float findMedian(struct Node *root)
{
    
    float res;
    vector<int> ans;
    inorder(root,ans);
    int n=ans.size();
    if(n%2==0){
        res=(float)(ans[n/2]+ans[(n-1)/2])/2;
          
    }
    else{
        res=(float)ans[n/2];
    }
    return res;
}