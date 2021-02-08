void printArr(int arr[],int n)
{
    //Your code for printing array here
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void setToZero(int arr[],int n)
{
   //Use memset to set arr to zero
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    
}

void xor1ToN(int arr[], int n)
{
   //Xor arr[i]^i
   for(int i=0;i<n;i++){
       arr[i]=arr[i]^i;
   }
}