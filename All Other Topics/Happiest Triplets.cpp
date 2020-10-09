class Solution{
  public:
    vector<int> smallestDifferenceTriplet(int arr1[], int arr2[], int arr3[], int n){
   
    sort(arr1, arr1+n); 
    sort(arr2, arr2+n); 
    sort(arr3, arr3+n); 
  
    int res_min, res_max, res_mid; 
  
    int i = 0, j = 0, k = 0; 
  
    int diff = INT_MAX; 
    int maxi;
    int mini;
    while (i < n && j < n && k < n){
        int sum = arr1[i] + arr2[j] + arr3[k];
         maxi = max(arr1[i], max( arr2[j], arr3[k] ) ); 
         mini = min(arr1[i], min( arr2[j], arr3[k]) ); 
        
        if (mini == arr1[i]) 
            i++; 
        else if (mini == arr2[j]) 
            j++; 
        else
            k++; 
  
        if (diff > (maxi-mini)){ 
            diff = maxi - mini; 
            res_max = maxi; 
            res_mid = sum - (maxi + mini); 
            res_min = mini; 
        } 
    }
    vector<int>ans;
        ans.push_back(res_max);
        ans.push_back(res_min);
        ans.push_back(res_mid);
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
    }
};