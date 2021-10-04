void merge(ll  a[],ll  l,ll  m,ll  r, ll  &count) //count=inversion count
{
    ll  n1=m-l+1;
    ll  n2=r-m;
    ll  left[n1];
    ll  right[n2];
    f(i,n1) left[i]=a[l+i];
    f(i,n2) right[i]=a[m+i+1];
    ll  i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j]) a[k]=left[i], ++i;
        else { a[k]=right[j] ,count+=(n1-i) , ++j; } //cout<<count<<"g"<<endl; }
        ++k; 
    }
    while(i<n1) a[k]=left[i], ++i,++k;
    while(j<n2) a[k]=right[j], ++j, ++k;
}
 
ll  mergeSort(ll  a[],ll  l,ll  r,ll & count)
{
    if(l<r)
    {
        ll  m=(l+r)/2;
        mergeSort(a,l,m,count);
        mergeSort(a,m+1,r,count);
        merge(a,l,m,r,count);
    }
}
