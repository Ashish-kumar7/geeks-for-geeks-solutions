
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node  
{  
    public: 
    int data;  
    Node* left;  
    Node* right;  
};
Node* newNode(int data)  
{  
    Node* node = new Node(); 
    node->data = data;  
    node->left = NULL;  
    node->right = NULL;
    return node;  
}
Node *conversionfinal(int B[],int &index,int key,int min,int max,int size){
    if(index>size){
        return NULL;
    }
    Node * temp=NULL;
    if(key<max && key>min){
        temp=newNode(key);
        index++;
        if(index<size){
           temp->left=conversionfinal(B,index,B[index],min,key,size);
           temp->right=conversionfinal(B,index,B[index],key,max,size);
        }
    }
    return temp;
}
Node *conversion(int B[],int size){
    int index=0;
    int key=B[0];
    int min=-10;
    int max=100000;
    return conversionfinal(B,index,key,min,max,size);
}
void  postorder(Node * root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return ;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int B[n];
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	   Node * root= conversion(B,n);
	   postorder(root);
	   cout<<endl;
	}
	return 0;
}
