class TreeNode{
    public:
    int data;
    TreeNode *left, *right;
    TreeNode(int val = 0) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
int findIndex(int val, int *in, int l, int r) {
    for(int i=l; i<=r; i++) if(in[i] == val) return i;
    return -1;
}
TreeNode *buildTree(int *in, int *pre, int inS, int preS, int inE, int preE, int N){
    if(inS > inE) return nullptr;
    
    int rootData = pre[preS];
    int rootInd = findIndex(rootData, in, inS, inE);
    if(rootInd == -1) return nullptr;
    int LinS = inS;
    int LinE = rootInd - 1;
    int RinS = rootInd + 1;
    int RinE = inE;
    int LpreS = preS+1;
    int LpreE = LinE - LinS + LpreS;
    int RpreS = LpreE +1;
    int RpreE = preE;
    
    TreeNode *root = new TreeNode(rootData);
    root->left = buildTree(in, pre, LinS, LpreS, LinE, LpreE, N);
    root->right = buildTree(in, pre, RinS, RpreS, RinE, RpreE, N);
    return root;
}

void postOrderTrav(TreeNode *root, vector<int> &V) {
    if(!root) return;
    postOrderTrav(root->left, V);
    postOrderTrav(root->right, V);
    V.push_back(root->data);
}

void inor(TreeNode *root) {
    if(!root) return;
    inor(root->left);
    cout << root->data << " ";
    inor(root->right);
}


class Solution{
    public:
    bool checktree(int preorder[], int inorder[], int postorder[], int N) 
    { 
    	// Your code goes here
    	TreeNode *root = buildTree(inorder, preorder, 0, 0, N-1, N-1, N);
    vector<int> V;
    postOrderTrav(root, V);
    // inor(root);
    
    for(int i=0; i<N; i++) {
        if(postorder[i] != V[i]) return false;
    }
    
    return true;
    }  

};
