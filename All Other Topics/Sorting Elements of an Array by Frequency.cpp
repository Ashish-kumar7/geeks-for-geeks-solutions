#include<bits/stdc++.h>
using namespace std;
bool sortbysec(pair<int, int>a, pair<int, int>b){
    if(a.first != b.first){
        return (a.first)>(b.first);
    }
    else if(a.first == b.first){
        return (a.second < b.second);
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[62];
	    for(int i=0;i<62;i++){
	        A[i]=0;
	    }
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        A[x]++;
	    }
	    vector<pair<int,int> >V;
	    for (int i=0; i<62; i++){ 
	        if(A[i]>0){
             V.push_back( make_pair(A[i], i) );
	        }
	    }
	    sort(V.begin(), V.end(), sortbysec); 
	    for (int i=0; i<V.size(); i++){
	        for(int j=0;j<V[i].first;j++){
	            cout<<V[i].second<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}