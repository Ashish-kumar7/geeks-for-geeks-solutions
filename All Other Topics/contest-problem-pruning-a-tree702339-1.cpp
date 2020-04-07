
struct Node *pruneUtil(struct Node *root, int k, int *sum) 
{ 
    // Base Case 
    if (root == NULL)  return NULL; 
  
    // Initialize left and right sums as sum from root to 
    // this node (including this node) 
    int lsum = *sum + (root->data); 
    int rsum = lsum; 
  
    // Recursively prune left and right subtrees 
    root->left = pruneUtil(root->left, k, &lsum); 
    root->right = pruneUtil(root->right, k, &rsum); 
  
    // Get the maximum of left and right sums 
    *sum = max(lsum, rsum); 
  
    // If maximum is smaller than k, then this node 
    // must be deleted 
    if (*sum < k) 
    { 
        free(root); 
        root = NULL; 
    } 
  
    return root; 
} 

struct Node *prune(struct Node *root, int k)
{ 
	// Your code goes here
	int sum = 0; 
    return pruneUtil(root, k, &sum); 
} 