
int findTreeHeight(Node* node){
	if (node==NULL)	{
	    return 0;
	}
	if(node->right && node->right->left==node && node->left && node->left->right==node){
        return 1;
    }
	int l=findTreeHeight(node->left);
	int r=findTreeHeight(node->right);
if(l>r){
    return 1+l;
}
return 1+r;
}

