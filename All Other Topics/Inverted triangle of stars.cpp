
class Solution {
  public:
    vector<string> invIsoTriangle(int N) {
        // code here
        int x=2*N -1 ;
        
        vector<string>ans;
        for(int i=x,l=0;i>=1,l<N;i=i-2,l++){
            string str=""; 
            for(int k=0;k<l;k++){
                str+=" ";
            }
            for(int j=0;j<i;j++){
                str+="*";
            }
            ans.push_back(str);
        }
        
        return ans;
    }
};