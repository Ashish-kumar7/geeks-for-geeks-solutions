#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&A,vector<int>&V,vector<vector<int>>&ans, int index){
        ans.push_back(V);
    for(int i=index;i<A.size();i++){
            V.push_back(A[i]);
            solve(A,V,ans,i+1);
            V.pop_back();
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
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        A.push_back(a);
	   }
	   sort(A.begin(),A.end());
	    vector<int>V;
	    vector<vector<int>>ans;
	    
	    solve(A,V,ans,0);
	    
	    map<vector<int>,int>mp;
	    for(int i=0;i<ans.size();i++){
	        mp[ans[i]]++;
	    }
	    vector<vector<int>>vec;
	    for(auto it=mp.begin();it!=mp.end();it++){
            vec.push_back(it->first);
	    }
	    
	    for(int i=0;i<vec.size();i++){
	        vector<int>vec1=vec[i];
	        cout<<"(";
	        for(int j=0;j<vec1.size();j++){
	            cout<<vec1[j];
	            if(j!=vec1.size()-1){
	                cout<<" ";
	            }
	        }
	        cout<<")";
	    }
	    
	    cout<<endl;
	  }
	return 0;
}