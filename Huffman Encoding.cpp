	public:
	struct Node 
	{
       int data;
       struct Node* left;
       struct Node* right;

       Node(int val)
       {
           data = val;
           left = NULL;
           right = NULL;
       }
   };
   
   struct cmp 
   {

          bool operator()(Node* l, Node* r)
        {
           return (l->data > r->data) ;
        }
   };
    
    void preOrder(Node *root,string s, vector<string>& ans)
    {
        if(!root)
        {
            return;
        }
        
        if(!root->left && !root->right)
        {
            ans.push_back(s);
        }
        
        preOrder(root->left,s+"0",ans);
        preOrder(root->right,s+"1",ans);
    }
    
 vector<string> huffmanCodes(string S, vector<int> f, int n )
 {
     priority_queue<Node*,vector<Node*>,cmp> mh;

     for(int i=0; i<n; i++)
     {
        Node *temp = new Node(f[i]);
        mh.push(temp);
     }
     
     while(mh.size() >=2)
     {
         Node *left = mh.top();
         mh.pop();
         Node *right = mh.top();
         mh.pop();
         Node *parent = new Node(left->data + right->data);
         parent->left = left;
         parent->right = right;
         mh.push(parent);
     }
     
     Node *root = mh.top();
     mh.pop();
     vector<string> ans;
     preOrder(root,"",ans);
     return ans;
     
 }