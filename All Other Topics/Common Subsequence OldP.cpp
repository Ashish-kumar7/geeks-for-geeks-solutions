class Solution {
  public:
    int commonSubseq(string S1, string S2){
        // code here
        unordered_map<char,int>mp;
        for(int i=0;i<S1.length();i++){
            mp[S1[i]]++;
        }
        for(int i=0;i<S2.length();i++){
            if(mp.find(S2[i])!=mp.end()){
                return 1;
            }
        }
        
        return 0;
    }
};