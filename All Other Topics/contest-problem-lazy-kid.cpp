
bool SortedArray(int A[], int n) 
{
    int B[n];
    vector<int>C;
    
    for(int i=0;i<n;i++){
        B[i]=A[i];
        int k=A[i];
        C.push_back(k);
    }
    sort(B,B+n);
    int count=0;
    int mark1;
    int mark2;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=B[i])
        {
            mark1=i;
            break;
        }
    }
    for(int j=n-1;j>0;j--)
    {
        if(A[j]!=B[j])
        {
            mark2=j;
            break;
        }
    }
    int mm=mark2+1;
    reverse(C.begin()+mark1,C.begin()+mm);
    
    int point=0;
    for(int j=0;j<n;j++)
    {
        if(C[j]!=B[j])
        {
            point=1;
            break;
        }
    }
    
    if(point==0)
    {
        return 1;
    }
    return 0;
}
