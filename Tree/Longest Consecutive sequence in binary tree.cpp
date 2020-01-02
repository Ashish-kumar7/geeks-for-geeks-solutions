void consecutive_count(Node *root,int currentcount,int expected_data,int &result){
    if(root==NULL){
        return ;
    }
    if(root->data==expected_data){
        currentcount++;
    }
    else {
        currentcount=1;
    }
    if(result<=currentcount){
        result=currentcount;
    }
    consecutive_count(root->left,currentcount,(root->data)+1,result);
    consecutive_count(root->right,currentcount,(root->data)+1,result);
}
int longestConsecutive(Node* root){
     if(root==NULL){
         return 0;
     }  
     int result=0;
     int expected_data=root->data;
     int currentcount=0;
     consecutive_count(root,currentcount,expected_data,result);
     if(result>1){
         return result;
     }
     return -1;
}

