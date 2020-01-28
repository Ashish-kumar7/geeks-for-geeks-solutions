
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class meeting{
    public:
    int start;
    int end;
    int id;
};
bool comparision(meeting a,meeting b){
    return(a.end<b.end);
}
void meetingfixing(int S[],int E[],int n){
    meeting A[n];
    for(int i=0;i<n;i++){
        A[i].start=S[i];
        A[i].end=E[i];
        A[i].id=i+1;
    }
    sort(A,A+n,comparision);
    vector<int>B;
    B.push_back(A[0].id);  
    int time_limit=A[0].end;
    int count=0;
    for(int i=1;i<n;i++){
        if(A[i].start >= time_limit){
            B.push_back(A[i].id);
            time_limit=A[i].end;
            count++;
        }
    }
    for(int k=0;k<B.size();k++){
        cout<<B[k]<<" ";
    }
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int start1[n];
	    for(int i=0;i<n;i++){
	        cin>>start1[i];
	    }
	    int end1[n];
	    for(int j=0;j<n;j++){
	        cin>>end1[j];
	    }
	  meetingfixing(start1,end1,n);
	}
	return 0;
}
