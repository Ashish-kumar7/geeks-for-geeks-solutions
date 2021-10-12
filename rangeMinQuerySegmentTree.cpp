#include <bits/stdc++.h>
using namespace std;
int constructSTUtil(vector<int> input, int ss, int se, vector<int> &st, int si)
{
    if (ss == se)
    {
        st[si] = input[ss];
    }
    else
    {
        int mid = ss + (se - ss) / 2;
        st[si] = min(constructSTUtil(input, ss, mid, st, si * 2 + 1), constructSTUtil(input, mid + 1, se, st, si * 2 + 2));
    }
    return st[si];
}

vector<int> constructST(vector<int> input, int n)
{
    int height = (int)(ceil(log2(n)));
    int maxSize = 2 * (int)pow(2, height) - 1;

    vector<int> st(maxSize, 0);
    constructSTUtil(input, 0, n - 1, st, 0);
    return st;
}
int findMinUtil(vector<int> st, int qs, int qe, int ss, int se, int si)
{

    if (ss >= qs && se <= qe){
        return st[si];
}

    if (qs > se || qe < ss){
        return INT_MAX;
}
    int mid = ss + (se - ss) / 2;
    return min(findMinUtil(st, qs, qe, ss, mid, si * 2 + 1), findMinUtil(st, qs, qe, mid + 1, se, si * 2 + 2));
}
int findMin(int n, vector<int> st, int qs, int qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        cout << "invalid input" << endl;
        return -1;
    }
    return findMinUtil(st, qs, qe, 0, n - 1, 0);
}
int main()
{
    cout << "Enter number of array elements" << endl;
    int n;
    cin >> n;
    cout << "Enter array elements" << endl;

    vector<int> input(n);
    for (int i = 0; i < n; i++)
        cin >> input[i];

    //built segment tree from input array
    vector<int> st;
    st = constructST(input, n);
    cout << "\nsegment tree array" << endl;

    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << "\nEnter query range" << endl;
    int qs, qe;
    cin >> qs >> qe;
    cout << "Min element between " << qs << " and " << qe << " is " << findMin(n, st, qs, qe);
    return 0;
}
/* 
geeksforgeeks.org/segment-tree-set-1-range-minimum-query/

n=number of elements in input array
TC: tree construction: O(n). node for every element
    search:O(log n)
*/