class Solution {
public:
    int findLUSlength(vector<string>& strs) 
    {
        sort(strs.begin(), strs.end(), [](auto& a, auto& b){return a.size() < b.size();});
        unordered_map<string, int>mp;
        string temp = "";
        
        for (int i = strs.size() - 1; i >= 0; i--)
        {
            if (mp.find(strs[i]) != mp.end())
            {
                temp = strs[i];
                mp[temp]++;
            }   
            
            else if (!is_subsequence(temp, strs[i]))
            {
                mp[strs[i]]++;
            }
        }
        int res = -1;
        for (auto& x : mp)
        {
            if (x.second == 1)
                res = max(res, int(x.first.size()));
        }
        return res;
    }
    
    bool is_subsequence(string a, string b)
    {
        int index_a = 0, index_b = 0;
        while (index_a < a.size() && index_b < b.size())
        {
            while(index_a < a.size() && a[index_a] != b[index_b])
            {
                index_a++;
            }
            index_a++;
            index_b++;
        }
        return index_b == b.size() && index_a <= a.size();
    }
};
