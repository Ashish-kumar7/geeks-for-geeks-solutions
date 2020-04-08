#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    
	    int n,i,j;
	    cin>>n;
	    vector<int>a1(n);
	    vector<int>a2(n);
	    vector<int>t1;
	    vector<int>t2;
	    unordered_map<int,int>hash1,hash2;
	    
	    
	    for(i=0;i<n;i++) cin>>a1[i]; 
	    
	    for(i=0;i<n;i++) cin>>a2[i];
	    
	    t1 = a1;
	    t2 = a2;
	    sort(begin(a1),end(a1),greater<int>());
	    sort(begin(a2),end(a2),greater<int>());
	    
	    i=0;j=0;
	    int cnt=0;
	    
	    while(i<n  &&  j<n){
	         
	         if(a2[j]>=a1[i]){
	             
	             if(hash2.find(a2[j])==hash2.end() && hash1.find(a2[j])==hash1.end() )
	                       hash2[a2[j]]=1;
	             else{
	                 j++;
	                 continue;
	             }
	             cnt++;
	             if(cnt==n) break;
	             j++;
	         }
	         
	         else{
	             
	             if(hash1.find(a1[i])==hash1.end() &&  hash2.find(a1[i])==hash2.end())
	                 hash1[a1[i]]=1;
	             else{
	                 i++;
	                 continue;
	             }
	             cnt++;
	             if(cnt==n) break;
	             i++;
	         }
	    }
	    
	   if(cnt<n){
	        
	        while(j<n){
	           if(hash2.find(a2[j])==hash2.end() && hash1.find(a2[j])==hash1.end() ){
	                       hash2[a2[j]]=1;
	                           cnt++;
	             if(cnt==n) break;
	           }
	             j++;
	        }
	        
	        while(i<n){
	              
	             if(hash1.find(a1[i])==hash1.end() &&  hash2.find(a1[i])==hash2.end()){
	                 hash1[a1[i]]=1;
	             cnt++;
	             if(cnt==n) break;
	             }
	                 i++;
	            
	        }
	        
	    }
	    for(i=0;i<n;i++){
	        if(hash2[t2[i]]>0)
	        { 
	            cout<<t2[i]<<" ";
	            hash2[t2[i]]=0;
	        }
	    } 
	    for(i=0;i<n;i++)
	    {
	        if(hash1[t1[i]]>0)
	        { 
	            cout<<t1[i]<<" ";
	            hash1[t1[i]]=0;
	            
	        }
	    }
	    cout<<endl;
	}
	
	return 0;
}