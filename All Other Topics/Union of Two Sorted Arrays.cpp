vector<int> findUnion(int arr1[], int arr2[], int m, int n)
{
   vector<int>ans;
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            ans.push_back(arr1[i++]);
  
        else if (arr2[j] < arr1[i]) 
           ans.push_back(arr2[j++]); 
  
        else { 
            ans.push_back(arr2[j++]); 
            i++; 
        } 
    } 
    while (i < m) 
        ans.push_back(arr1[i++]);
  
    while (j < n) 
        ans.push_back(arr2[j++]);
        
        vector<int>final;
        
        for(int i=0;i<ans.size();i++){
            final.push_back(ans[i]);
            while(ans[i]==ans[i+1]){
                i++;
            }
        }
        
    return final;
}