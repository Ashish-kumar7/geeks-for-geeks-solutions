int minValue(Node* root)
{
    // Code here
    Node *current=root;
    
    if(current== NULL)
    {
        return 100000;
    }
    
    int c=root->data;
    int a=minValue(current->left);
    int b=minValue(current->right);
    
    if(a<b && a<c)
    {
        return a;
    }
    if(b<a && b<c)
    {
        return b;
        
    }
    if(c<a && c<b)
    {
        return c;
    }    
}