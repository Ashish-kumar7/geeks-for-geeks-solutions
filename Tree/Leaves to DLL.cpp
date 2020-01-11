
void converting(Node *root,vector<int>&A){
    if(root==NULL){
        return;
    }
    converting(root->left,A);
    converting(root->right,A);
    if(root->left==NULL && root->right==NULL){
        A.push_back(root->data);
    }
}
void createList(vector<int>A, int n, Node **head) { 
	Node *naya,*temp; 
	int i; 
	for(i=0;i<n;i++) {
		naya=new Node(A[i]);
		if(i==0) { 
			*head = naya; 
		} 
		else{
			temp=*head;
          	while(temp->right!=NULL){
              	temp=temp->right;
            }
			naya->right = NULL; 
          	temp->right=naya;
			naya->left = temp;
		} 
	} 
} 
Node *convertToDLL(Node *root,Node **head_ref){
vector<int>A;
converting(root,A);
int n=A.size();
createList(A,n,&*head_ref);
return *head_ref;
}
