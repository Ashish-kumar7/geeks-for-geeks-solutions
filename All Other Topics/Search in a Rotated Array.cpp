#include<iostream>
#include<bits/stdc++.h>
using namespace std;


    int search1(vector<int>nums,int s,int e,int key){
        if(s>e){
            return -1;
        }
         int mid=(s+e)/2;
        if(key==nums[mid]){
            return mid;
        }
        if(nums[s]<= nums[mid]){
            if(key<=nums[mid] && key>=nums[s]){
              return  search1(nums,s,mid-1,key);
            }
            else {
              return   search1(nums,mid+1,e,key);
            }
        }
        if(key>=nums[mid] && key<=nums[e]){
           return  search1(nums,mid+1,e,key);
        }
        return search1(nums,s,mid-1,key);
    }
   




int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>A;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        A.push_back(x);
	    }
	    int key;
	    cin>>key;
	    cout<<search1(A,0,n-1,key);
	    cout<<endl;
	    
	    
	}
	return 0;
}