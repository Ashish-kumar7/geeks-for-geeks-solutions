int get(Node* root, int X , int& ans){
    if(!root) return 0;
    int sum = root->data + get(root->left, X, ans) + get(root->right, X, ans);
    if(sum == X) ans++;
    return sum;
}

int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
     int ans = 0;
	 if(!root) return 0;
     int left = get(root->left,X,ans);
     int right = get(root->right,X,ans);
     if(left + right + root->data == X) ans++;
	 return ans;
}