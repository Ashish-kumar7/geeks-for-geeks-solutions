#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class job{
    public:
    int profit;
    int deadline;
};
bool comparison(job a, job b){
     return (a.profit > b.profit);
}
void jobsecheduling(job A[],int n){
    sort(A, A+n, comparison);
    int result[n];
    int slot[n];
    for(int k=0;k<n;k++){
        slot[k]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=min(n,A[i].deadline)-1 ;j>=0; j--){
            if(slot[j]==0){
            result[j]=i;
            slot[j]=1;
            break;
            }
        }
    }
    int x=0;
    int p=0;
    for(int l=0;l<n;l++){
       if(slot[l]==1){
          x=x+A[result[l]].profit;
          p++;
       }
    }
    cout<<p<<" "<<x<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
   	   job A[n];
	    for(int i=0;i<n;i++){
	        int jobid;
	        cin>>jobid;
	        int deadline1;
	        cin>>deadline1;
	        int profit1;
	        cin>>profit1;
	       A[i].profit=profit1;
	       A[i].deadline=deadline1;
	   }
        jobsecheduling(A,n);
	}
	return 0;
}