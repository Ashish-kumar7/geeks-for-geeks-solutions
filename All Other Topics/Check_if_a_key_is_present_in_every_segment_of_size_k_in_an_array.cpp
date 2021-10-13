#include <iostream>
using namespace std;
bool key(int a[],int x,int k,int n)
{
    for(int i=0;i<n;i=i+k)
    {
        for(int j=0;j<k;j++)
        {
            if(a[i+j]==x)
            break;
            if(i==j)
            return false;
        }
        if(i==n)
        return true;
        else{
        int j=i-k;
        for(int i=j;i<n;i++)
        {
            if(a[i]==x)
            break;
            if(i==n)
            return false;
        }
    }
    }
    return true;
}
int main()
{
    int a[100],n,i;
    cout<<"Enter the value of N";
    cin>>n;
    cout<<"Enter the Array Elements";
    for(i=0;i<n;i++)
     {
            cin>>a[i];
        }
    int x,k;
    cout<<"Enter the key value";
    cin>>x;
    cout<<"Enter the segment size"; 
    cin>>k;
    if(key(a,x,k,n))
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
    return 0;
}
