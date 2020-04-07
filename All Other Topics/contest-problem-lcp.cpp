
string LCP(string ar[], int n){   
    if(n==1){
        return ar[0];
    }
    sort(ar,ar+n);
    int x=min(ar[0].length(),ar[n-1].length());
    string a=ar[0];
    string b=ar[n-1];
    int zz=ar[0].length();
    int i=0;
    while(i<=zz && a[i]==b[i]){
        i++;
    }
    string z=b.substr(0,i);
    string oo="-1";
    if(i!=0)
    {
        return z;
    }
    return oo;
}