bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    int i=0;
    int j=m-1;
    int flag=0;
    while(i<n && j>=0){
            if(matrix[i][j]<x){
                i++;
            }
            else i#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&temp,int index,int &ans,int k){
    if(temp.size()==1){
        ans=temp[0];
        return;
    }
    index=(index+k) % (temp.size());
    temp.erase(temp.begin()+index);
    solve(temp,index,ans,k);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n;
	    cin>>k;
	    k--;
	    vector<int>temp;
	    for(int i=0;i<n;i++){
	        temp.push_back(i);
	    }
	    int ans=-1;
	    int index=0;
	   solve(temp,index,ans,k);
	    cout<<ans+1<<endl;
	}
	return 0;
}f(matrix[i][j]>x){
                j--;
            }
            else if(matrix[i][j]==x){
                flag=1;
                break;
            }
        }
        
        if(flag==1){
            return 1;
        }
        else{
            return 0;
        }
}
