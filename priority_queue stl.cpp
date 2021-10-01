#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

class Compare{
    public:
    bool operator()(int a,int b){
        return a<b;
    }
};

int main() {
    int arr[]={9,0,8,6,5,3};
    int n=sizeof(arr)/sizeof(int);
    priority_queue<int,vector<int>,Compare> heap;
    for(int x:arr){
        heap.push(x);
    }
    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();

    }
}
