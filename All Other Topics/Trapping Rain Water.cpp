int trappingWater(int arr[], int n){

    // Your code here
    int left[n];
    left[0]=arr[0];
    
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    
    int right[n];
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    
    int ans=0;
    
    for(int i=0;i<n;i++){
        ans+=( min(right[i],left[i]) - arr[i] );
    }
    
    return ans;
}