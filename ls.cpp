#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main() {
int arr[] = {10,15,12,9,6,4,8};
int n=sizeof(arr)/sizeof(int);
cout<<"enter key to search"<<endl;
int key;
cin>>key;

int index=linearsearch(arr,n,key);
if(index!=-1){
   
    cout<<key<< " is present at index "<< index<<endl;
}
else{
    cout<<key<< " is NOT Found!"<< endl;
   }
}
