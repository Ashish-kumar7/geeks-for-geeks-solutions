class Solution{
    public:
    double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
    {
        // Your code goes here
        
        vector<double> arr;
        double ans;
        int n = arr1.size() + arr2.size();
        int flag;
        n&1 ? flag = 1 : flag = 0;
        int i = 0, j = 0;
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i] < arr2[j]){
                arr.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i] > arr2[j]){
                arr.push_back(arr2[j]);
                j++;
            }
            else{
                arr.push_back(arr1[i]);
                arr.push_back(arr2[j]);
                i++; j++;
            }
            if(flag == 1 && arr.size() == n/2 + 1)
            {
                ans = arr[n/2];
                return ans;
            }
            else if(flag == 0 && arr.size() == n/2+1)
            {
                ans = (arr[n/2 -1] + arr[n/2]) / 2;
                return ans;
            }
        }
        while(i<arr1.size()){
            arr.push_back(arr1[i]);
            i++;
            
             if(flag == 1 && arr.size() == n/2 + 1)
            {
                ans = arr[n/2];
                return ans;
            }
            else if(flag == 0 && arr.size() == n/2+1)
            {
                ans = (arr[n/2 -1] + arr[n/2]) / 2;
                return ans;
            }
        }
        while(j<arr2.size()){
            arr.push_back(arr2[j]);
            j++;
            
             if(flag == 1 && arr.size() == n/2 + 1)
            {
                ans = arr[n/2];
                return ans;
            }
            else if(flag == 0 && arr.size() == n/2+1)
            {
                ans = (arr[n/2 -1] + arr[n/2]) / 2;
                return ans;
            }
        }
        return ans;
    }
};