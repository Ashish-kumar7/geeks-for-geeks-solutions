void serialize_the_tree(Node *root,vector<int>&A){
    if(root==NULL){   
        A.push_back(-1);
        return ;
    }
    A.push_back(root->data);
    serialize_the_tree(root->left,A);
    serialize_the_tree(root->right,A);
}
Node * deserialize_the_tree(vector<int>A,int &index){
    if(A[index]==-1 || index>=A.size()){   
        index++;
        return NULL;
    }
    Node *temp= new Node(A[index]);
    index++;
    temp->left= deserialize_the_tree(A,index);
    temp->right=deserialize_the_tree(A,index);
    return temp;
}
void serialize(Node *root,vector<int> &A){
    serialize_the_tree(root,A);
    
}
Node * deSerialize(vector<int> &A){
  int index=0;
   return deserialize_the_tree(A,index);
}
