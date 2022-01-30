string compress(string s)
    {
        // Your code goes here
        int n = (int)s.length();vector<int> pi(n);
        for (int i = 1; i < n; i++) {int j = pi[i-1];
            while (j > 0 && s[i] != s[j])
                j = pi[j-1];
            if (s[i] == s[j])
                j++;
            pi[i] = j;
        }string res;
        for(int i=n-1;i>=0;i--){if(i%2){
                if(pi[i]>=(i+1)/2&&(i+1)%(2*(i+1-pi[i]))==0){
        res.push_back('*'); i/=2; i++;}
    else{ res.push_back(s[i]);}}else{res.push_back(s[i]);}}
     reverse(res.begin(),res.end());return res;}