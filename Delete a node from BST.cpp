Node *inorderSucc(Node *root)
{
    Node *curr = root;
    
    while(curr && curr->left!=NULL)
    {
        curr = curr->left;
    }
    return curr;
}
// Function to delete a node from BST.
Node *deleteNode(Node *root, int x) {
    // your code goes here
     if(root == NULL)
    {
        return root;
    }
    if(x < root->data)
    {
        root->left = deleteNode(root->left,x);
    }
    else if(x > root->data)
    {
        root->right = deleteNode(root->right,x);
    }
    else
    {
        if(root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
        
    }
}