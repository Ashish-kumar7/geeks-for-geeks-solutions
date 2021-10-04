ass Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count0++;
            }
            else if(a[i]==1){
                count1++;
            }
            else if(a[i]==2){
                count2++;
            }
        }
        // cout<<count0<<" "<<count1<<" "<<count2<<endl;
        for(int i=0;i<count0;i++){
            a[i]=0;
        }
        
        for(int i=count0;i<count1+count0;i++){
            a[i]=1;
        }
        
        for(int i=count1+count0;i<count2+count1+count0;i++){
            a[i]=2;
        }
        
    }
    
};