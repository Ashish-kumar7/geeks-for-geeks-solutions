Node * treehelper(int in[],int pos[], int inS, int inE , int posS, int posE)
{
    if(inS >inE)
    {
        return NULL;
    }
    int rootdata=pos[posE];
    int rootindex;
    
    for(int i=inS;i<=inE;i++)
    {
        if(in[i]==rootdata)
        {
            rootindex=i;
            break;
        }
    }
    int rootindex1;
    for(int j=posS;j<=posE;j++)
    {
        if(pos[j]==rootdata)
        {
            rootindex1=j;
            break;
        }
    }
    
    int LinS=inS;
    int LinE=rootindex-1;
    int LposS=posS;
    int LposE=LinE-LinS+LposS;
    int RinS=rootindex+1;
    int RinE=inE;
    int RposS=LposE+1;
    int RposE=rootindex1-1;
  Node * node1= new Node(rootdata);
  node1->left=treehelper(in,pos,LinS,LinE,LposS,LposE);
  node1->right=treehelper(in,pos,RinS,RinE,RposS,RposE);
   return node1; 
}
Node *buildTree(int in[], int pos[], int n)
{
    return treehelper(in,pos,0,n-1,0,n-1);
}

