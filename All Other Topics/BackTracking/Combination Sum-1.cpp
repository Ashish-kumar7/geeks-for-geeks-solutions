#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&AA,vector<int>temp,int index,int sum,vector<int>&A){
    
    if(sum<0){
        return ;
    }
    if(sum==0){
        AA.push_back(temp);
        return ;
    }
    for(int i=index;i<A.size();i++){
        if(A[i]>sum){
            return ;
        }
        
        temp.push_back(A[i]);
        solve(AA,temp,i,sum-A[i],A);
        temp.pop_back();
    }
}


int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>A;
	    int ee;
	    for(int i=0;i<n;i++){
	        cin>>ee;
	        A.push_back(ee);
	    }
	    int sum;
	    cin>>sum;
	    
	    vector<vector<int>>AA;
	    vector<int>temp;
	  //  int sum=0;
	    
	    sort(A.begin(),A.end());
	    
	    A.erase(unique(A.begin(), A.end()), A.end());
	    
	    solve(AA,temp,0,sum,A);
	    
	    if(AA.size()==0){
	        cout<<"Empty"<<endl;
	    }
	    else {
	    for(int i=0;i<AA.size();i++){
	        cout<<"(";
	        for(int j=0;j<AA[i].size();j++){
	            cout<<AA[i][j];
	            if(j!=AA[i].size()-1){
	                cout<<" ";
	            }
	        }
	        cout<<")";
	    }
		        cout<<endl;

	}
	}
	return 0;
}