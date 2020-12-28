long long power(int N,int R)
{
   //Your code here
   long long int RR=1000000007;
   
   string naya1=to_string(N);
   string naya =naya1;
   reverse(naya.begin(),naya.end());
   
   int x=stoi(naya);
   
   int ans=1;
   
   
   
   
   for(int i=0;i<x;i++){
       ans=((ans%RR) * (N%RR))%RR;
   }
    return ans;
}