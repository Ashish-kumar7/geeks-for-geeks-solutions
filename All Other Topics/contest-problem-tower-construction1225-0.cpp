#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
    vector<int>a(n);
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        pq.push(make_pair(a[i],i));
    }
    int x,y;
    int lastind=0;
    while(!pq.empty()){
        x=pq.top().first;
        y=pq.top().second;
        for(int i=lastind;i<y;i++){
            cout<<"Not possible"<<endl;
        }
        lastind=y+1;
        while(!pq.empty() && pq.top().second<=y){
            cout<<pq.top().first<<" ";
            pq.pop();
        }
        cout<<endl;
    }
	}
	return 0;
}