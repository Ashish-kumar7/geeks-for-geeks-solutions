//using union to find number of connected componenet
class Solution
{
    public:
    //Function to merge two nodes a and b.
      int find(int a, int *arr)
   {
       if(arr[a]==a)
       return a;
       
       arr[a]=find(arr[a],arr);
       return arr[a];
   }
    void unionNodes( int a, int b, int arr[], int rank1[], int n) 
    {
        //code here
          int a_rep=find(a, arr);
       int b_rep=find(b,arr);
       
       if(a_rep==b_rep)
       return;
       
       if(rank1[a_rep]>rank1[b_rep])
       arr[b_rep]=a_rep;
       else if(rank1[a_rep]<rank1[b_rep])
       arr[a_rep]=b_rep;
       else
       {
           arr[b_rep]=a_rep;
           rank1[a_rep]++;
       }
    }
    
    //Function to determine number of connected components.
    int findNumberOfConnectedComponents( int n, int arr[], int rank1[]) 
    {
        //code here
        set<int> st;
       for(int i=1;i<=n;i++)
       st.insert(find(i,arr));
       return st.size();
    }

    };


// { Driver Code Starts.



int main() {
    int t;
    cin>>t;

    while(t--) {
        
        //taking number of nodes
        int n;
        cin>>n;

        //initializing parent array and
        //rank array
        for(int i=1; i<=n; i++) {
            arr[i] = i;
            rank1[i] = 1;
        }

        //taking number of queries
        int q;
        cin>>q;
        Solution obj;
        while(q--) {
            int a,b;
            cin>>a>>b;
            
            //calling unionNodes() function
            obj.unionNodes(a,b, arr, rank1, n);
        }

        //calling function findNumberofConnectedComponents()
        cout<<obj.findNumberOfConnectedComponents(n, arr, rank1)<<endl;
    }
    return 0;
}  // } Driver Code Ends