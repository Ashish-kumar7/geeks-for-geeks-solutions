class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int res=0;
        int l=0;
        int h=n-1;
       while(l<h)
       {
           if(height[l]<height[h])
           {
               res=max(res,height[l]*(h-l-1));
               l++;
           }
           else if(height[l]>height[h])
           {
               res=max(res,height[h]*(h-l-1));
               h--;
           }
           else
           {
               res=max(res,height[l]*(h-l-1));
               l++;h--;
           }
       }
       return res;
    }   
};