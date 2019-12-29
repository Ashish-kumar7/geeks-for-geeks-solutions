
bool symmetric_check(Node*root1,Node*root2)
{
 if(root1==NULL && root2==NULL)
 {
     return true;
 }
 if(root1!=NULL && root2!=NULL && root1->key==root2->key)
 {
     return symmetric_check(root1->left,root2->right) && symmetric_check(root1->right,root2->left);
 }
 
 return false;
  
    
}
bool isSymmetric(struct Node* root)
{	
	return symmetric_check(root,root);
	
}
