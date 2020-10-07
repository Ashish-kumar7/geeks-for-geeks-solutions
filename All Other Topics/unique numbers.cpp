class Solution
{
public:
    vector<int> uniqueNumbers(int l,int r){
        vector<int>ans;
        for (int i=l ; i<=r ; i++) {
            int num = i; 
            bool visited[10] = {false};  
            while (num) {
                if (visited[num % 10]){
                    break;
                } 
               visited[num%10] = true; 
                num = num/10; 
            }
            if (num == 0){
                ans.push_back(i);
            }
        }
        return ans;
}
};