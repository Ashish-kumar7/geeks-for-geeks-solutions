class Solution{
    public:
    int kth(int arr1[], int m, int arr2[], int n, int k){
     
          if (k > (m+n) || k < 1) return -1;
          
          if (m > n) return kth(arr2, n, arr1, m, k);
          
          if (m == 0) return arr2[k - 1];
          
          if (k == 1) return min(arr1[0], arr2[0]);
          
          
          int i = min(m, k / 2);
          int j = min(n, k / 2);
          
          
          if (arr1[i - 1] > arr2[j - 1] ) 
            return kth(arr1,  m , arr2 + j, n - j, k - j);
          else
            return kth(arr1 + i, m - i, arr2,  n, k - i);
}

    int kthElement(int arr1[], int arr2[], int n, int m, int k){
        return kth(arr1,n,arr2,m,k);
    }
};