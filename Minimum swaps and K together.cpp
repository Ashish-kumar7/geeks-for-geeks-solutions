int minSwap(int arr[], int n, int k) {
        // Complet the function
        
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k)count++;
        }
        
        int temp=0;
        
        for(int i=0;i<count;i++){
            if(arr[i]>k)temp++;
        }
        
        int ans=temp;
        
        
        for(int i=0,j=count;i<n,j<n;i++,j++){
            if(arr[i]>k)temp--;
            if(arr[j]>k)temp++;
            
            ans=min(ans,temp);
        }
        
        return ans;
    }