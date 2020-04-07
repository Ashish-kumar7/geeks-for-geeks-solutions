vector <int> shortestDistance(string S, char X) {
    int prev = INT_MAX; 
    vector<int> ans; 
    for (int i = 0; i < S.length(); i++){
        if (S[i] == X){
            prev = i; 
        } 
        ans.push_back(abs(i - prev)); 
    } 
    prev = INT_MIN;  
    for (int i = S.length() - 1; i >= 0; i--) {  
        if (S[i] == X){  
            prev = i;
        }
        ans[i] = min(ans[i], abs(prev - i));  
    }
    return ans;
}