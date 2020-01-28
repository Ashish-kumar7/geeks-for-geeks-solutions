

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class activity{
    public:
    int start;
    int end;
};
bool comparison(activity a,activity b){
    return (a.end<b.end);
}
void activity_selection(activity A[],int n){
    sort(A,A+n,comparison);
    int i=0;
    int j=i+1;
    int count=0;
    while(i<n){
        if(A[i].end <= A[j].start){
            count++;
            i=j;
            j++;
        }
        else if(A[i].end > A[j].start){
            j++;
        }
    }
    cout<<count<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    activity A[n];
	    for(int i=0;i<n;i++){   
	        int a;
	        cin>>a;
	        A[i].start=a;
	    }
	    for(int i=0;i<n;i++){
	       int b;
	        cin>>b;
	        A[i].end=b;
	    }
	    activity_selection(A,n);
	}
	return 0;
}