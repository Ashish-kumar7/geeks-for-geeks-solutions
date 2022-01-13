int minJumps(int arr[], int n){
       int jump = 0,currEnd = 0,maxSoFar = 0;
        for(int i=0;i<n-1;i++) {
            maxSoFar = max(maxSoFar,i+arr[i]);
            if(i == currEnd) {
                jump++;
                currEnd = maxSoFar;
            }
        }
        
        if(currEnd < n-1)
            jump = -1;
            
        return jump;
    }