
Node * makingatree(int pre[],char preLN[] ,int & index,int n){
    int index_value=index;
    if(index==n){
        return NULL;
    }
    Node *temp=new Node(pre[index_value]);
    index++;
    if(preLN[index_value]=='N'){
      temp->left= makingatree(pre, preLN , index, n);
      temp->right= makingatree(pre, preLN,index, n);
    }
    return temp;
}
struct Node *constructTree(int n, int pre[], char preLN[]){
    int index=0;
    return makingatree(pre,preLN,index,n);
}
