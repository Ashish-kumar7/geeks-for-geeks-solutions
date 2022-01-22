  int closestToZero(int arr[], int n)
        {
            // your code here 
            int res = INT_MAX, left = 0, right = n-1;
            sort(arr, arr+n);
            while (left < right) {
                int x = arr[left], y = arr[right], z = x+y;
                int a = abs(z), b = abs(res);
                if (a < b || a==b && z>res)
                    res = z;
                if (z > 0)
                    right--;
                else if (z < 0)
                    left++;
                else
                    return 0;
            }
            return res;
        }