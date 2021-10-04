class Solution
{
   public:
   int find(int x,int par[])
   {
       if(x==par[x])
       {
           return x;
       }
       
       int rep= find(par[x],par);
       par[x]=rep;
       return rep;
   }
   
   //Function to merge two nodes a and b.
   void union_( int x, int y, int par[], int rank1[]) 
   {
       //code here
       int x_rep=find(x,par);
       int y_rep=find(y,par);
       
       if(rank1[x_rep]>rank1[y_rep])
       {
           par[y_rep]=x_rep;
       }
       
       if(rank1[x_rep]<rank1[y_rep])
       {
           par[x_rep]=y_rep;
       }
       
       else
       {
           par[y_rep]=x_rep;
           x_rep++;
       }
   }
   
   //Function to check whether 2 nodes are connected or not.
   bool isConnected(int x,int y, int par[], int rank1[])
   {
       //code here
       int x_rep=find(x,par);
       int y_rep=find(y,par);
       
       return (x_rep==y_rep);
   }
};