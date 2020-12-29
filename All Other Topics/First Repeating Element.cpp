int firstRepeated(int arr[], int n) {
    //code here
    map<int,int>mp;
    for(int i=n-1;i>=0;i--){
        mp[arr[i]]++;
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>1){
            flag=1;
            return i+1;
        }
    }
    if(flag==0){
        return -1;
    }
    
}
