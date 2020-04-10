#include <bits/stdc++.h> 
using namespace std; 

void replaceElements(int arr[], int n) { 
	unordered_set<int> s; 
	for (int i = 0; i < n; i++) { 
		// check whether the element is 
		// repeated or not 
		if (s.find(arr[i]) == s.end()) 
			s.insert(arr[i]); 
		else { 
			// find the next greatest element 
			for (int j = arr[i] + 1; j < INT_MAX; j++) { 
				if (s.find(j) == s.end()) { 
					arr[i] = j; 
					s.insert(j); 
					break; 
				} 
			} 
		} 
	} 
} 

int main() 
{ 
	int arr[] = { 1, 2, 5, 7, 8, 8, 7 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	replaceElements(arr, n); 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 
