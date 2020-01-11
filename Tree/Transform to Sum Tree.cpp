
int Sum(Node *node)
{
    if(node==NULL){
        return 0 ;
    }
    int value=node->data;
    node->data=Sum(node->left) + Sum(node->right);
    return value+node->data;
}
void toSumTree(Node *node){
    Sum(node);
    return ;
}

