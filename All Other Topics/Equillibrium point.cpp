#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int sumf=0;
        
        cin>>n;
        int A[n];
        int sum=0;
        // if(n==1)
        // {
        //     // cout<<1<<endl;
        //   //  return 0;
        //   count=0;
        // }
        
        for(int i=0;i<n;i++){
            cin>>A[i];
            sum=sum+A[i];
        }
        
        int j;
        int count=-1;
        
        for( j=0;j<n;j++){
          sumf= (sumf+A[j]);
        
        if((sumf-A[j])==(sum-sumf))
        {
            count=j;
            break;
        }

    }
    if(n==1)
    {
        cout<<1<<endl;
    }

    else if(count>0)
    {
        cout<<count+1<<endl;
    }
    
    else 
    {
        cout<<-1<<endl;
    }
    
    }
    return 0;
}
