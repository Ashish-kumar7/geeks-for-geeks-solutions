#include <bits/stdc++.h>
using namespace std;

int convertFive(int n) {
    
    int count=1;
    int num=0;
    int rem,res;
    while(n)
    {
        res=n/10;
        rem=n%10;
        if(rem==0)
        {
            num=num+count*5;
        }
        else 
        num = num + rem*count;
        count = count*10;
        n=n/10;
    }
    return num;

}


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}



