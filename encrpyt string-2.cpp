string convertToHex(int num){
 
    string temp = "";
    while (num != 0) {
        int rem = num % 16;
        char c;
        if (rem < 10) {
            c = rem + 48;
        }
        else {
            c = rem + 87;
        }
        temp += c;
        num = num / 16;
    }

    return temp;
}

    string encryptString(string s) {
        // code here
        string ans="";
        int count=1;
        char temp;
        
        for(int i=0;i<s.length()-1;i++){
            temp=s[i+1];
            if(s[i]==s[i+1]){
                count++;
            }else{
                ans+=s[i];
                ans+=convertToHex(count);
                count=1;
            }
        }
        ans+=temp;
        ans+=convertToHex(count);
        // cout<<ans<<endl;
        
        reverse(ans.begin(),ans.end());
        return ans;
    }