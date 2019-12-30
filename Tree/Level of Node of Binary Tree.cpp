
int geetinglevel(Node *node, int target,int level)
{
    if(node==NULL)
    {
        return 0;
    }
    if(node->data==target)
    {
        return level; 
    }
    int storage=geetinglevel(node->left,target,level+1);
    if(storage!=0)
    {
        return storage;
    }
    storage=geetinglevel(node->right,target,level+1);
    return storage;
}



int getLevel(struct Node *node, int target)
{
	//code here
	int level=1;
	return geetinglevel(node,target,level);
	
}
