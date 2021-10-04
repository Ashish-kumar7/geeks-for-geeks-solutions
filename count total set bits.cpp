class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n == 1 || n == 0)
        return n;
        
        int x=0;
        while(pow(2,x) <= n){
            x++;
        }
        x=x-1;
        return (x*pow(2,x-1))+(n-pow(2,x)+1)+countSetBits(n-pow(2,x));
    }
};