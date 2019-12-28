

bool isIsomorphic(Node *n1,Node *n2)
{
//add code here.
if(n1==NULL && n2==NULL)
{
    return 1;
}

if( (n1!=NULL && n2==NULL) ||  (n1==NULL && n2!=NULL) )
{
    return 0;
}

if(n1->data!=n2->data)
{
    return 0;
}

return((isIsomorphic(n1->left,n2->left) && isIsomorphic(n2->right,n1->right))||(isIsomorphic(n1->left,n2->right) && isIsomorphic(n2->left,n1->right) ) );
}


