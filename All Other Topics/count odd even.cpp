void countOddEven(int arr[], int sizeof_array){
    int count0=0;
    int count1=0;
    for(int i=0;i<sizeof_array;i++){
        if(arr[i]%2==0){
            count0++;
        }
        else{
            count1++;
        }
    }
   cout<<count1<<" "<<count0<<endl;
}