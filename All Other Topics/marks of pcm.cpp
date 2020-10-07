#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        long int p,c,m;
};
bool compare(student s1 , student s2 ){
    if(s1.p<s2.p) return true;
    if(s1.p>s2.p) return false;
    if(s1.p==s2.p){
        if(s1.c<s2.c) return false;
        if(s1.c>s2.c) return true;
        if(s1.c==s2.c){
            if(s1.m<s2.m) return true;
            if(s1.m>s2.m) return false;
        }
    }
    return false;
}
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        student marks[n];
        for(int i=0;i<n;i++){
            cin>>marks[i].p>>marks[i].c>>marks[i].m;
        }
        sort(marks,marks+n, compare);
        for(int i=0;i<n;i++){
            cout<<marks[i].p<<" "<<marks[i].c<<" "<<marks[i].m<<" ";
            cout<<endl;
        }
    }
    return 0;
}