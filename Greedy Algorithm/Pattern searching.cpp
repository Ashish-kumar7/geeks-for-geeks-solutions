bool searchPattern(string str, string pat)
{
    // your code here
    int n=pat.length();
    for(int i=0;i<=str.length()-n;i++){
        string temp=str.substr(i,n);
        if(temp==pat){
            return 1;
        }
    }
    return 0;
}