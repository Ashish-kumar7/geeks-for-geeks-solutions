bool check(string pattern, string word){
    if (pattern.length() != word.length()) 
        return false;
    char ch[128] = { 0 };
    int len = word.length();
    for (int i = 0; i < len; i++) { 
        if (ch[pattern[i]] == 0) 
            ch[pattern[i]] = word[i]; 
        else if (ch[pattern[i]] != word[i]) 
            return false; 
    }
    return true; 
}
vector<string> findMatchedWords(vector<string> dict,string pattern){
       vector<string>V;
       for (string word : dict){
        if (check(pattern, word)) 
            V.push_back(word); 
    } 
    sort(V.begin(),V.end());
    return V;
}