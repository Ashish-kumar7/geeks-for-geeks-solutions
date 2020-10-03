#include<bits/stdc++.h>

using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    	double mat[3][3],d[3],inv[3][3];
	    	int i, j;
	        double determinant = 0;
	        for(i = 0; i < 3; i++){
	        	for(j = 0; j < 3; j++){
	        	    cin>>mat[i][j];
	        	}
	        	cin>>d[i];
	        }
	//finding determinant
	        for(i = 0; i < 3; i++)
		        determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
	        
	        if(determinant==0){
	            cout<<"0"<<endl;
	        }
	        else
	        {
	            for(i = 0; i < 3; i++)
	            {
	        	for(j = 0; j < 3; j++)
	        	{
	        		inv[i][j]=((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant;
	        	}
	        }
	        double ans[3]={0};
	        for(i = 0; i < 3; i++)
	        {
	        	for(j = 0; j < 3; j++)
	        	{
	        	    ans[i]+=inv[i][j]*d[j];
	        	}
	        }
	        for(i = 0; i < 3; i++)
	        {
	            cout<<floor(ans[i])<<" ";
	        }
	        cout<<endl;
	        }
	}
	return 0;
}
