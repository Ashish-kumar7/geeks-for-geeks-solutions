class Solution {
  public:
    vector<int> changeBits(int N) {
        int x=N;
        int count=0;
        while(x){
            count++;
            x>>=1;
        }
        int p=pow(2,count);
        int q=p-1;
        vector<int>ans;
        ans.push_back(q-N);
        ans.push_back(q);
        return ans;
    }
};