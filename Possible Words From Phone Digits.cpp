string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     
    vector<string>solve(string digits){    
        if(digits.length()<=0){
            vector<string>str;
            str.push_back("");
            return str;
        }
        char first=digits[0];
        string temp=digits.substr(1);
        vector<string>partial=solve(temp);
        vector<string>ans;
        for(auto it : partial){
            string corr=arr[first-'0'];   
            for(int i=0;i<corr.length();i++){
                string finalanswer=corr[i]+it;
                ans.push_back(finalanswer);
            }
        }
        return ans;
    }
    
    vector<string> possibleWords(int a[], int n){
        string str="";
        for(int i=0;i<n;i++){
            str+=to_string(a[i]);
        }
        vector<string>ans=solve(str);
        sort(ans.begin(),ans.end());
        return ans;
    }