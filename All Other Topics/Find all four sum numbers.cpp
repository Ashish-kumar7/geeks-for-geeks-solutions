#include<bits/stdc++.h>
using namespace std;

void findingelements(vector<int> A,int x,int n)
{
    unordered_map<int,vector<pair<int,int> > >mp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            mp[A[i]+A[j]].push_back(make_pair(i,j));
        }
    }
    
    map<vector<int>, int>mpvec;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=A[i]+A[j];
            if(mp.find(x-sum)!=mp.end()){
                for(int k = 0; k<mp[x-sum].size(); k++){
                    pair<int,int>p=mp[x-sum][k];
                    if(p.first!=i && p.second!=j && p.first!=j && p.second!=i){
                        vector<int>X;
                        X.push_back(A[i]);
                        X.push_back(A[j]);
                        X.push_back(A[p.first]);
                        X.push_back(A[p.second]);
                        sort(X.begin(),X.end());
                        mpvec[X]++;
                    }
                }
            }
        }
    }
    
    if(mpvec.size()>0){
        map<vector<int>, int> ::iterator itmpvec;
        for(itmpvec=mpvec.begin(); itmpvec!=mpvec.end(); ++itmpvec){
            for(int j=0;j<4;j++){
                cout<<(itmpvec->first)[j]<<" ";
            }
            cout<<"$";
        }
    } else{
        cout<<-1;
    }
    cout<<endl;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n;
	    cin>>k;
	    vector<int> AA(n);
	    for(int i=0;i<n;i++){
	        cin>>AA[i];
	    }
	    findingelements(AA,k,n);
	}
	return 0;
}