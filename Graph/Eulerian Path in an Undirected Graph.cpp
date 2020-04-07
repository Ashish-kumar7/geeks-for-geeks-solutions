#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
    int n;
    cin>>n;
    int A[n][n];
    
    int count1=0;
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++){   
            int x;
            cin>>x;
            A[i][j]=x;
            if(x==1)
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            count1++;
        }
    }
    
    if(count1==2)
    {
        cout<<1<<endl;
    }
    else 
    {
    cout<<0<<endl;
	}
	}
	return 0;
}