
int findCousinSum(Node* root, int key) 
{ 
    // code here.
    
    if (root == NULL) 
        return -1; 
  
    // Root node has no cousins so return -1. 
    if (root->data == key) { 
        return -1; 
    } 
  
    // To store sum of cousins. 
    int currSum = 0; 
  
    // To store size of current level. 
    int size; 
  
    // To perform level order traversal. 
    queue<Node*> q; 
    q.push(root); 
  
    // To represent that target node is 
    // found. 
    bool found = false; 
  
    while (!q.empty()) { 
  
        // If target node is present at 
        // current level, then return 
        // sum of cousins stored in currSum. 
        if (found == true) { 
            return currSum; 
        } 
  
        // Find size of current level and 
        // traverse entire level. 
        size = q.size(); 
        currSum = 0; 
  
        while (size) { 
            root = q.front(); 
            q.pop(); 
  
            // Check if either of the existing 
            // children of given node is target 
            // node or not. If yes then set 
            // found equal to true. 
            if ((root->left && root->left->data == key) 
                || (root->right && root->right->data == key)) { 
                found = true; 
            } 
  
            // If target node is not children of 
            // current node, then its childeren can be cousin 
            // of target node, so add their value to sum. 
            else { 
                if (root->left) { 
                    currSum += root->left->data; 
                    q.push(root->left); 
                } 
  
                if (root->right) { 
                    currSum += root->right->data; 
                    q.push(root->right); 
                } 
            } 
  
            size--; 
        } 
    } 
  
    return -1;
} 