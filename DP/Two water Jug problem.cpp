#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ 
    if (b==0){
       return a;
    }
    return gcd(b, a%b); 
} 

int jugger(int jug1,int jug2,int water){
    int from=jug1;
    int to=0;
    int count=1;
    while(to!=water && from!=water){
        int mini=min(from,jug2-to);
        to=to+mini;
        from=from-mini;
        count++;
        
        if(from==water || to==water){
            break ;
        }
        if(from==0){
            from=jug1;
            count++;
        }
        if(to==jug2){
            to=0;
            count++;
        }
    }
    return count;
}

int minSteps(int m, int n, int d){
       if (m > n) {
            swap(m, n); 
        } 
        if (d > n){
            return -1; 
        }
        if ((d % gcd(n,m)) != 0){
            return -1;
        }
        return min(jugger(n,m,d),jugger(m,n,d)); 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
	    int m,n,d;
	    cin>>m;
	    cin>>n;
	    cin>>d;
	    cout<<minSteps(m,n,d)<<endl;
	}
	return 0;
}