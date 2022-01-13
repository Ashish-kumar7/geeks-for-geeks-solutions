string reverseWords (string s)
    {
        //code here.
        string temp = "";
       string res = "";
       for (int i = 0; i < s.length(); i++)
       {
           temp += s[i];
           if (s[i] == '.')
           {
               reverse(temp.begin(), temp.end() - 1);
               res += temp;
               // cout<<temp;
               temp = "";
           }
       }
       reverse(temp.begin(), temp.end());
       res += temp;
       // cout<<res;
   
       return res;
    }
