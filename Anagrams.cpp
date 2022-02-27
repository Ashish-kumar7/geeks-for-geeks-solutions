class Solution
{
    public:
    bool isAnagram(string a, string b){
        
        // Your code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        return a==b;
        
    }

};
