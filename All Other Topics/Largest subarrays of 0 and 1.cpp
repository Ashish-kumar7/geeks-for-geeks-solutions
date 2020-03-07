
int maxLen(int A[], int n) {
    // Your code here
    
    for(int i=0;i<n;i++){
        if(A[i]==0){
            A[i]=-1;
        }
    }
    
    int B[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
        B[i]=sum;
        //cout<<B[i]<<endl;
    }
    
   int key=0;
    map<int,int>mp;
    int val=-1;
    mp[key]=val;
    
    int max=0;
    for(int i=0;i<n;i++)
    {   
        key=B[i];
        if(mp.find(B[i])!=mp.end())
        {
            auto itr=mp.find(B[i]);
            int x=itr->second;
            
            int ll=i-x;
            if(ll>max)
            {
                max=ll;
            }
        }
        else
        {
            mp[key]=i;
        }
    }
    
    return max;
}