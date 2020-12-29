
class Solution{
public:
    int isPallindrome(long long int N){
        // code here
        vector<int>val;
        while(N>0){
            int rem=N%2;
            val.push_back(rem);
            N=N/2;
        }
        for(int i=0;i<val.size()/2;i++){
            if(val[i]!=val[val.size()-i-1]){
                return 0;
            }
        }
        
        return 1;
    }
};