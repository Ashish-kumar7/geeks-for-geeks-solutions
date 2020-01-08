
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
Node * conversion(int A[],int start ,int end)
{
    if(start>end){
        return NULL;
    }
    int mid =(start+end)/2;
    Node * temp=newNode (A[mid]);
    temp->left=conversion(A,start,mid-1);
    temp->right=conversion(A,mid+1,end);
    return temp;
}
void printpreorder(Node *root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    if(root->left!=NULL)
    {
    printpreorder(root->left);
    }
    if(root->right!=NULL)
    {
    printpreorder(root->right);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int B[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>B[i];
	    }
	    Node * root=NULL;
        int start=0;
        int end=n-1;
        root=conversion(B,start,end);
        printpreorder(root);
        cout<<endl;
	}
	return 0;
}
