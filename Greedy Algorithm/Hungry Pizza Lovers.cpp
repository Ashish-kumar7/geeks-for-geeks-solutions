
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]=x+y;
    }
    multimap <int,int> m;
    int key,value;
    for(int i=0;i<n;i++){
         m.insert(make_pair(a[i],i+1));
    }
    multimap<int,int> :: iterator it;
     for (it=m.begin() ; it!=m.end() ; it++)
       cout<<(it)->second<<endl;
}
	return 0;
}


