#include <bits/stdc++.h>
using namespace std;
void disp_ar(long long int n, long long int ar[])
{
    cout << "array : ";
    for(long long int i=0; i<n; i++)
        cout << ar[i] << " ";
    cout << endl;
}

long long int merge(long long int start, long long int mid, long long int end, long long int ar[])
{
    long long int n1=mid-start+1, n2=end-mid;
    long long int c=0;
    long long int ar1[n1], ar2[n2], i, j, k;
    for(i=0; i<n1; i++)
        ar1[i] = ar[start+i];
    for(i=0; i<n2; i++)
        ar2[i] = ar[mid+1+i];
    i = j = 0;
    k = start;
    while(i<n1 && j<n2)
    {
        if(ar1[i] <= ar2[j])
            ar[k++] = ar1[i++];
        else
        {
            c += n1-i;
            ar[k++] = ar2[j++];
        }
    }
    while(i < n1)
        ar[k++] = ar1[i++];
    while(j < n2)
        ar[k++] = ar2[j++];
    return c;
}

long long int mergeSort(long long int start, long long int end, long long int ar[])
{
    if (start < end)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long long int mid = (start+end)/2;

        // Sort first and second halves
        long long int c1 = mergeSort(start, mid, ar);
        long long int c2 = mergeSort(mid+1, end, ar);
        long long int c3 = merge(start, mid, end, ar);
        return c1 + c2 + c3;
    }
    else
        return 0;
}

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n, i, c;
        cin >> n;
        long long int ar[n];
        for(i=0; i<n; i++)
            cin >> ar[i];
        c = mergeSort(0,n-1,ar);
        cout << c << endl;
        //disp_ar(n,ar);
    }
    return 0;
}
