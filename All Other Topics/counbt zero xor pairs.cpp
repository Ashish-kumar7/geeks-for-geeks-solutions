long long int calculate(int arr[], int n)
{
    // Complete the function
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
   long long int count=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second >=2){
           long long int x=it->second;
            
           long long int y=x*(x-1)/2;
            count+=y;
        }
    }
    
    return count;
}