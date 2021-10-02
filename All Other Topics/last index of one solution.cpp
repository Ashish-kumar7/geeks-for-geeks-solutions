Class Solution{
    public:
    int lastIndex(string s) 
    {
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]=='1') return j;
        }
        return -1;
    }

};



int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}  
