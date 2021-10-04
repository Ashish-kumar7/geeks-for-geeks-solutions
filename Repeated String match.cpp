class Solution{

    public:
    bool solve(string A,string B){
        for(int i=0;i<=A.length()-B.length();i++){
            string a=A.substr(i,B.length());
            if(a==B){
                return 1;
            }
        }
        return 0;
    }
    int repeatedStringMatch(string A, string B) {
        int count=1;
        string S=A;
        while(S.length()<B.length()){
            S+=A;
            count++;
        }
        if(solve(S,B)){
            return count;
        }
        if(solve(S+A,B)){
            return count+1;
        }
        return -1;
    }
  
};