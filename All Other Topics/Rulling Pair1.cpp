class Solution{
    public:
    int sumofelements(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10);
            n=n/10;
        }
        return sum;
    }
    int RulingPair(vector<int> arr, int n){
    	
    	unordered_map<int,vector<int> >mp;
    	
    	for(int i=0;i<n;i++){
    	    int a=sumofelements(arr[i]);
    	    mp[a].push_back(arr[i]);
    	}
    	int maxi=-1;
    	for(auto it=mp.begin();it!=mp.end();it++){
    	    vector<int>temp=it->second;
    	    if(temp.size()>=2){
    	        sort(temp.begin(),temp.end(),greater<int>());
    	        int sum=temp[0]+temp[1];
    	        maxi=max(maxi,sum);
    	    }
    	}
    	return maxi;
    }   
};