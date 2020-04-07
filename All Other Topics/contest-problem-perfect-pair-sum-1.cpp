
int sum(int n){   
    int val=0;
    while(n>0){
        val+=(n%10);
        n=n/10;
    }
    return val;
}

int PerfectMatch(vector<int> arr, int n) 
{
    // Your code goes here
    unordered_map<int,int>mp;
    int ans=-1;
    for(int i=0;i<arr.size();i++){       
          int summing=sum(arr[i]);
        if(mp[summing]!=0){
            ans=max(ans,mp[summing]+arr[i]);
        }
        mp[summing]=max(arr[i],mp[summing]);
    }
    return ans;
}