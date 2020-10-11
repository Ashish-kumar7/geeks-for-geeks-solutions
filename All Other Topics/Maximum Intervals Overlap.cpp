#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--){
            int n;
        cin>>n;
        int entry[n];
        for(int i=0;i<n;i++){
            cin>>entry[i];
        }
        int exit1[n];
        for(int i=0;i<n;i++ ){
            cin>>exit1[i];
        }
        
        int centry=0;
        int cexit=0;
        int time=0;
        int i=1;
        int j=0;
        sort(entry,entry+n);
        sort(exit1,exit1+n);
        
        int maxi=1;
        int count=1;
        
        while(i<n && j<n){
            if(entry[i]<=exit1[j]){
                count++;
                
                if(maxi<count){
                  maxi=max(maxi,count); 
                  time=entry[i];
                }
                
                i++;
            }
            else{
                j++;
                count--;
            }
        }
        
        cout<<maxi<<" "<<time<<endl;
	}
	
	return 0;
}