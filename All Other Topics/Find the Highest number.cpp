class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here
        int n=a.size();
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                return a[i];
            }
        }
        return 0;
    }
};