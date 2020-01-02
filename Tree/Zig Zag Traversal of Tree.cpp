
void zigZagTraversal(Node* root){
	queue<Node *>q1;
	stack<Node *>s1;
	stack<Node *>s2;
	q1.push(root);
	while(!q1.empty() || !s1.empty() || !s2.empty()){
        while(!q1.empty()) {
            Node*p=q1.front();
            q1.pop();
            cout<<p->data<<" ";
            if(p->left!=NULL){
                s1.push(p->left);
            }
            if(p->right!=NULL){
                s1.push(p->right);
            }
        }
	    while(!s1.empty()){
	        Node * r=s1.top();
	        s1.pop();
	        cout<<r->data<<" ";
            s2.push(r);
	    }
	    while(!s2.empty()){
	        Node * t=s2.top();
	        s2.pop();
        if(t->left!=NULL){
            q1.push(t->left);
        }
	     if(t->right!=NULL){
            q1.push(t->right);
	     }
	    }
	}
	cout<<endl;
}


