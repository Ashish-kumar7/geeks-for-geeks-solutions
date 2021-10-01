class Solution {
public:
    string mostCommonWord(string s, vector<string>& ban) {
        
        map<string,int> arr;
        string temp = "";
        
        for(int i=0;i<s.length();i++){
           
            
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                temp += s[i];
            }
            else{
                if(temp==""){
                    continue;
                }
                else{
                    transform(temp.begin(),temp.end(),temp.begin(),::tolower);
                    arr[temp]++;
                    temp = "";
                }
            }
        }
        
        if(temp!=""){
            transform(temp.begin(),temp.end(),temp.begin(),::tolower);
            arr[temp]++;
        }
        
        for(int i=0;i<ban.size();i++){
            if(arr.find(ban[i])!=arr.end()){
                arr.erase(ban[i]);  
            }
        }
        
        string word;
        int count = INT_MIN;
        for(auto i:arr){
            if(i.second>count){
                count = i.second;
                word = i.first;
            }
        }
        return word;
    }
};
