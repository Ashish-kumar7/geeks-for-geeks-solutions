vector<int> find3Numbers(vector<int> arr, int N) {
    // Your code here
    int small[N];
    int big[N];
    
    int mini=INT_MAX;
    
    for(int i=0;i<N;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
        small[i]=mini;
    }
    
    int maxi=INT_MIN;
    
    for(int i=N-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        big[i]=maxi;
    }
    
    for(int i=0;i<N;i++){
        if(arr[i]<big[i] && arr[i]>small[i]){
            vector<int>ans;
            ans.push_back(small[i]);
            ans.push_back(arr[i]);
            ans.push_back(big[i]);
            
            return ans;
        }
    }
    
    vector<int>ans1;
    return ans1;
}