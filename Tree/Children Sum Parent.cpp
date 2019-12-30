
int counting(Node*node,int &count){
     if(node->left==NULL && node->right==NULL){
     return count;
 }
 if(node->left!=NULL && node->right!=NULL && node->data!=(node->left)->data+(node->right)->data){
     count++;
 counting(node->left,count);
 counting(node->right,count);
return count; 
}
 if(node->left!=NULL &&  node->right==NULL && node->data!=(node->left)->data){
     count++;
 counting(node->left,count);
 //counting(node->right,count);
return count; 
}
 if( node->right!= NULL && node->left==NULL && node->data!=(node->right)->data){
     count++;
 counting(node->right,count);
return count; 
}
 if(node->left!=NULL && node->right!=NULL && node->data==(node->left)->data+(node->right)->data){
 counting(node->left,count);
 counting(node->right,count);
return count; 
}

}
int isSumProperty(Node *node){
    int count=0;
    int p=counting(node,count);
    if(p>0){
        return 0;
    }
    return 1;
}
