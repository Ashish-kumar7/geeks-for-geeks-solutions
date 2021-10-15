/*
Given an array of distinct integers, find length of the longest subarray which contains numbers that can be arranged in a continuous sequence. 
EX:
Input:  arr[] = {10, 12, 11};
Output: Length of the longest contiguous subarray is 3

*/
#include <iostream>
#include <vector>
using namespace std;
bool isConsecutive(int ar[], int i, int j, int min, int max)
{
    if (max - min != j - i) {
        return false;
    }
    vector<bool> visited(j - i + 1);
    for (int k = i; k <= j; k++)
    {
        if (visited[ar[k] - min]) {
            return false;
        }
        visited[ar[k] - min] = true;
    }
    return true;
}
void MaxSubarray(int ar[], int n)
{
    int len = 1;
    int start = 0, end = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min_val = ar[i], max_val = ar[i];
        for (int j = i + 1; j < n; j++)
        {
            min_val = min(min_val, ar[j]);
            max_val = max(max_val, ar[j]);
            if (isConsecutive(ar, i, j, min_val, max_val))
            {
                if (len < max_val - min_val + 1)
                {
                    len = max_val - min_val + 1,
                    start = i, end = j;
                }
            }
        }
    }
    // print the length of largest subarray with contiguous elements
    cout<< abs(start-end)+1;
}
int main()
{
    int ar[] = { 14, 12, 11, 20 }; //output- 2
    // one more sample example from gfg- {1, 56, 58, 57, 90, 92, 94, 93, 91, 45} output-5
    int n = sizeof(ar) / sizeof(ar[0]);
    cout<<"Length of the longest contiguous subarray is ";
    MaxSubarray(ar, n);
    
    return 0;
}
