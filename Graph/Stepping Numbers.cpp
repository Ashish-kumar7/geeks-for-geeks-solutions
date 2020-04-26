#include<bits/stdc++.h>
using namespace std;
void store(vector<int>& A){
    queue<int>Q;
    for(int i=1;i<=9;i++){
        Q.push(i);
    }
    while(!Q.empty()){
        int a=Q.front();
        Q.pop();
        if(a<0){
            continue;
        }
        if(a<1000001){
            A[a]++;
        }
        int r=a%10;
        int x=a*10 + (r-1);
        int y=a*10 + (r+1);
        if(r==9){
            Q.push(x);
        }
        else if(r==0){
            Q.push(y);
        }
        else{
            Q.push(x);
            Q.push(y);
        }
    }
}
int main(){
	int t;
	cin>>t;
	vector<int>A(1000001,0);
	A[0]=1;
	store(A);
	for(int i=1;i<1000001;i++){
	    A[i]=A[i]+A[i-1];
	}
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    if(n==0){
	        cout<<A[m]<<endl;
	    }
	    else{
	        cout<<A[m]-A[n-1]<<endl;
	    }
	}
	return 0;
}