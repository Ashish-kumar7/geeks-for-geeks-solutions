class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          //code here
          
          pair<int,int>ans;
          
          map<pair<int,int>,int>mp;
          
          ans={0,INT_MAX};
          
          for(int i=0;i<k;i++){
              mp[{KSortedArray[i][0],i}]=0;
          }
          
          while(1){
              int min_val=mp.begin()->first.first;
              int max_val=mp.rbegin()->first.first;
              
              if(ans.second-ans.first > max_val-min_val){
                  ans={min_val,max_val};
              }
              
              int row=mp.begin()->first.second;
              int col=mp.begin()->second;
              
              
              if(col==n-1)break;
              
              mp.erase(mp.begin()->first);
              
              mp[{KSortedArray[row][col+1],row}]=col+1;
              
              
          }
          
          return ans;
          
    }
};