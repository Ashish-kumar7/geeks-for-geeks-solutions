

Node *copyrightleft(Node*tree,unordered_map<Node*,Node*>mp){
    
    if(tree==NULL){
        return NULL;
    }
    Node * newtree=new Node(tree->data);
    mp[tree]=newtree;
    newtree->left=copyrightleft(tree->left,mp);
    newtree->right=copyrightleft(tree->right,mp);
    return newtree;
}
   
 void copyrandom(Node *tree,Node *nayatree,unordered_map<Node *,Node *>mp)
 {
     
     
     if(nayatree==NULL){
         return;
     }
     nayatree->random=mp[tree->random];
     copyrandom(tree->left,nayatree->left,mp);
     copyrandom(tree->right,nayatree->right,mp);
 }
   
Node* cloneTree(Node* tree)
{
   //Your code here
    if (tree==NULL)
    {
        return NULL ;
    }
   unordered_map<Node *,Node*>mp;
   Node * nayatree=copyrightleft(tree,mp);
   //dgwiqgiyfgyi
   copyrandom(tree,nayatree,mp);
   return nayatree;
}

