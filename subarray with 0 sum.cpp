    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        int pre_sum=0;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            pre_sum+=arr[i];
            if(pre_sum==0){
                return true;
            }
            if(s.find(pre_sum)!=s.end()){
                return true;
            }
            s.insert(pre_sum);
        }
        return false;
    }
};
