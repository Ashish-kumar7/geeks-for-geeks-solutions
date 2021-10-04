//Program to find position of only set bit in number

#include<bits/stdc++.h>
using namespace std;


int findPosition(int N) {
    //Base Case
    if(N == 0)
    return -1;
    
    int pos = 0,count=0; //pos maintains the position of current bit and count maintains the count of set bit.
    while(N>0)
    {
        //if current bit is set increase the counter 
        if(N&1)
        count++;
        
        
        //right shift the number by 1 and increase the position of bit that is under consideration
        N = N>>1;
        pos++;
        
        
        //if first set is encountered then break the loop.
        if(count == 1)
        break;
    }
    
    //if there are more than one set bit return -1.
    if(N>0)
    return -1;
    
    return pos;
        
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<findPosition(n)<<endl;
	}
}