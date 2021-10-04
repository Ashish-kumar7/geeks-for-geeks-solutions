//Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

// Input:
// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.

//Unordered_Map is used to store an element of a pair

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>mp;
        int res=0;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        for(int i=0;i<n;i++)
        {
            if(mp.find(k-arr[i])!=mp.end())
            res+=mp[k-arr[i]];
            if(k-arr[i]==arr[i])
            res--;
        }
        return res/2;//As the same pair is counted twice for each number
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
} 