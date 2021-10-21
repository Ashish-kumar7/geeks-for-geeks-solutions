
//Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 
#include<bits/stdc++.h>
using namespace std;


int maxSubarraySum(vector<int>&arr){
int max_ending_here=0, max_so_far=INT_MIN;

for(int i=0;i<arr.size();i++)
{
    if(arr[i]<= max_ending_here+arr[i])
        max_ending_here+=arr[i];
    else
        max_ending_here=arr[i];
    if(max_ending_here>max_so_far)
        max_so_far=max_ending_here;
}
return max_so_far;
}
int main()
{
    vector<int>arr{-2, -3, 14, -1, -2, 2, 10, -3};
    int max_sum =maxSubarraySum(arr);

    cout<<"Maximum cointigous sum is "<<max_sum;

}

