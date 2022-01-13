class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    
    bool isidentical(Node * tree1,Node * tree2){
        if(tree1==NULL && tree2==NULL)return 1;
        
        if(tree1==NULL || tree2==NULL)return 0;
        
        return isidentical(tree1->left,tree2->left) && isidentical(tree1->right,tree2->right) && (tree1->data==tree2->data);
    }
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
        if(S==NULL)return 1;
        if(T==NULL)return 0;
        
        if(isidentical(T,S))return 1;
        
        if( isSubTree(T->left,S) || isSubTree(T->right,S) ){
            return 1;
        }else{
            return 0;
        }
        
    }
};