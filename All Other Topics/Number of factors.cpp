class Solution{
public:
    int countFactors(int N){
        //code here
        int count =0;
        for(int i=1;i<=sqrt(N);i++){
            if(N%i==0){
                count++;
            }
        }
        if( ceil(sqrt(N))==floor(sqrt(N)) ){
            return (2*count) -1 ;
        }
        return 2*count;
    }
};