long long trappingWater(int arr[], int n){
        // code here
        int left[n];
        left[0]=arr[0];
        
        
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],arr[i]);
        }
        int right[n];
        
        right[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            right[i]=max(arr[i],right[i+1]);
        }
        
        long long int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=(min(right[i],left[i])-arr[i]);
        }
        
        return sum;
    }