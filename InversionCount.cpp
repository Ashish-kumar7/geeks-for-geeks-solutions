    long long int merge(long long arr[],int s,int mid,int e)
    {
        long long int inv = 0;
        long long int n1 = mid - s + 1;
        long long int n2 = e - mid;
        long long int a[n1];
        long long int b[n2];
        for(int i = 0;i<n1;i++)
        {
            a[i] = arr[s + i];
        }
        for(int i =0;i<n2;i++)
        {
            b[i] = arr[mid + 1 + i];
        }
        int i = 0,j = 0,k = s;
        while(i<n1 && j<n2)
        {
            if(a[i]<=b[j])
            {
                arr[k++] = a[i++];
            }
            else
            {
                //a[i] > b[j] && i < j
                arr[k++] = b[j++];
                inv += n1 - i;
            }
        }
        while(i<n1)
        {
            arr[k++] = a[i++];
        }
        while(j<n2)
        {
            arr[k++] = b[j++];
        }
        return inv;
    }
    long long int mergeSort(long long arr[],int s,int e)
    {
        long long int inv = 0;
        if(s < e)
        {
            int mid = s + (e - s)/2;
            inv += mergeSort(arr,s,mid);
            inv += mergeSort(arr,mid+1,e);
            inv += merge(arr,s,mid,e);
        }
        return inv;
    }
    long long int inversionCount(long long arr[], long long N)
    {
       long long int inv = mergeSort(arr,0,N-1);
       return inv;
    }

};
