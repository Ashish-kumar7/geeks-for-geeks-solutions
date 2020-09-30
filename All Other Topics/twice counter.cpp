class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string,int>mp;
           for(int i=0;i<n;i++){
               mp[list[i]]++;
           }
           int count=0;
           for(auto it=mp.begin();it!=mp.end();it++){
               if(it->second==2){
                   count++;
               }
           }
           return count;
        }

};