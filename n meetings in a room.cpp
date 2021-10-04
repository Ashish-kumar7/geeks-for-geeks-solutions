class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            pair<int,int>p={end[i],start[i]};
            vec.push_back(p);
        }
        sort(vec.begin(),vec.end());
        
        int ans=1;
        int prev=vec[0].first;
        
        for(int i=0;i<n-1;i++){
            if(vec[i+1].second>prev){
                ans++;
                prev=vec[i+1].first;
            }
        }
        return ans;
    }
};