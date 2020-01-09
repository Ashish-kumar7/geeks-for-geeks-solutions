
if(head==NULL)
    {
        root==NULL;
        return ;
    }
    
    //TreeNode * root=NULL;

    queue<TreeNode *>q1;
    
    root=newNode(head->data);
    
    q1.push(root);
        head=head->next;

    while(head!=NULL)
    {
        
        TreeNode * leftnode=NULL;
        TreeNode * rightnode=NULL;
        TreeNode * parent=q1.front();
        q1.pop();
        leftnode=newTreeNode(head->data);
        q1.push(leftnode);
        head=head->next;
        parent->left=leftnode;
        
        if(head!=NULL)
        {
            rightnode=newTreeNode(head->data);
            q1.push(rightnode);
            head=head->next;
            parent->right=rightnode;
        }
    }
    
