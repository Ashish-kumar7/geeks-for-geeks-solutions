public:
    static bool cmp(const pair<int,int>&a,const pair<int,int>&b)
    {
        return a.second<b.second;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        int ans = 0;
        vector<pair<int,int>> vp(n);
        
        for(int i=0;i<n;i++)
        {
            vp[i] = {start[i],end[i]};
        }
        
        sort(vp.begin(),vp.end(),cmp);
        
        int i=0,e=-1;
        while(i<n)
        {
            if(e<vp[i].first)
            {
                ans++;
                e = vp[i].second;
            }
            i++;
        }
        
        return ans;
    }