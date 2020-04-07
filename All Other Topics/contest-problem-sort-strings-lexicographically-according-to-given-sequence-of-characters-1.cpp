unordered_map<char,int>mp;
bool compare(string & a,string & b){
    int len=min(a.length(),b.length());
    for(int i=0;i<len;i++){
        if(a[i]!=b[i]){
            return mp[a[i]] < mp[b[i]];
        }
    }
    return a.length()<b.length();
}
void sort_by_order( vector <string> &words, string &alphabets ){
    for(int i=0;i<alphabets.length();i++){
        mp[alphabets[i]]=i;
    }
    sort(words.begin(),words.end(),compare);
}
