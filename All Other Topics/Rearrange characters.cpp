#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        map<char,int> m;

        int flag = 0;
        int c = (s.length()/2);
        for(int i=0;i<s.length();i++){
                m[s[i]]++;
        }

        auto it = m.begin();

        while(it!=m.end()){
                if(it->second > c){
                    flag = 1;
                    break;
                }
            it++;
        }

        if(flag == 1){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}
