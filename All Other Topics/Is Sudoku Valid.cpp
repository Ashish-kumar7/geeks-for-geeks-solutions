#include<bits/stdc++.h>
using namespace std;

bool notInRow(int arr[][9], int row) { 
    set<int> st; 
    for (int i = 0; i < 9; i++) { 
        if (st.find(arr[row][i]) != st.end()) 
            return false;  
        if (arr[row][i] != 0) 
            st.insert(arr[row][i]); 
    } 
    return true; 
}
bool notInCol(int  arr[][9], int col) { 
    set<int > st;
    for (int i = 0; i < 9; i++) {  
        if (st.find(arr[i][col]) != st.end()) 
            return false; 
        if (arr[i][col] != 0) 
            st.insert(arr[i][col]); 
    } 
    return true; 
} 
bool notInBox(int arr[][9], int startRow, int startCol) { 
    set<char> st;
    for (int row = 0; row < 3; row++) { 
        for (int col = 0; col < 3; col++) { 
            char curr = arr[row + startRow][col + startCol];
            if (st.find(curr) != st.end()) 
                return false; 
            if (curr != 0) 
                st.insert(curr); 
        } 
    } 
    return true; 
}
bool isValid(int arr[][9], int row, int col) { 
    return notInRow(arr, row) && notInCol(arr, col) && 
           notInBox(arr, row - row % 3, col - col % 3); 
} 
int main(){
	int t;
	cin>>t;
	while(t--){
	int A[9][9];
	for(int i=0;i<9;i++){
	    for(int j=0;j<9;j++){
	        cin>>A[i][j];
	    }
	}
	int flag=0;
    for (int i = 0; i < 9; i++) { 
        for (int j = 0; j < 9; j++) { 
            if (!isValid(A, i, j)) {
                flag=1;
            }
        } 
    }
    if(flag==0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
	}
	return 0;
}