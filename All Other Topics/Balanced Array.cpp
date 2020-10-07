class Solution{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int x=n/2;
       int sum1=0;
       int sum2=0;
       for(int i=0;i<x;i++){
           sum1+=a[i];
           sum2+=a[n-i-1];
       }
       return abs(sum1-sum2);
    }
};