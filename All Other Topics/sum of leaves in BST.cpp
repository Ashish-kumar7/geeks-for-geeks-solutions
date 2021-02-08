void summ(Node * r ,int & sum){
    if(r==NULL){
        return ;
    }
    
    summ(r->left,sum);
    if(r->left==NULL && r->right==NULL){
        sum+=(r->data);
    }
    summ(r->right,sum);
}

int sumOfLeafNodes(Node *r ){
     int sum=0;
     summ(r,sum);
     
     return sum;
}