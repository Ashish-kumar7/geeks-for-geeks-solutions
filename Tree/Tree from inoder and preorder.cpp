
Node * treehelper(int in[],int pre[], int inS, int inE , int preS, int preE)
{
    if(inS >inE)
    {
        return NULL;
    }
    int rootdata=pre[preS];
    int rootindex;
    
    for(int i=inS;i<=inE;i++)
    {
        if(in[i]==rootdata)
        {
            rootindex=i;
            break;
        }
    }
    
    int LinS=inS;
    int LinE=rootindex-1;
    int LpreS=preS+1;
    int LpreE=LinE-LinS+LpreS;
    int RinS=rootindex+1;
    int RinE=inE;
    int RpreS=LpreE+1;
    int RpreE=preE;
  Node * node1= new Node(rootdata);
  node1->left=treehelper(in,pre,LinS,LinE,LpreS,LpreE);
  node1->right=treehelper(in,pre,RinS,RinE,RpreS,RpreE);
   return node1; 
}
Node* buildTree(int in[],int pre[], int inStrt, int inEnd)
{
int n=inEnd+1;
return treehelper(in,pre,0,n-1,0,n-1);

}
