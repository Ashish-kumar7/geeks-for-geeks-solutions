int maxNumOfChocolates(int arr[], int n, int k) 
{ 
    unordered_map<int, int> um; 
    int sum[n], curr_rem; 
    int maxSum = 0; 
    sum[0] = arr[0]; 
    for (int i = 1; i < n; i++){ 
        sum[i] = sum[i - 1] + arr[i]; 
    }
    for (int i = 0; i < n; i++) { 
        curr_rem = sum[i] % k; 
        if (curr_rem == 0) { 
            if (maxSum < sum[i]) {
                maxSum = sum[i]; 
            }
        } 
        else if (um.find(curr_rem) == um.end()) {
            um[curr_rem] = i; 
        }
        else{
            if (maxSum < (sum[i] - sum[um[curr_rem]])) 
            {
            maxSum = sum[i] - sum[um[curr_rem]]; 
        }
        }
    } 
    return (maxSum / k); 
} 