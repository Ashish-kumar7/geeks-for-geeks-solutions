class Solution {
public:
    
    vector<vector<string>> result;
    
    void DFS(string beginWord, string endWord, unordered_map<string, set<string>> &adjList, vector<string> &path){
        path.push_back(beginWord);
        if(beginWord == endWord){
            result.push_back(path);
            path.pop_back();
            return;
        }
        for(auto x: adjList[beginWord]){
            DFS(x, endWord, adjList, path);
        }
        path.pop_back();
    }

    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        // code here
        unordered_map<string, set<string>> adjList;
        set<string> dict(wordList.begin(), wordList.end());
        
        queue<string> queue;
        queue.push(beginWord);
        unordered_map<string, int> isVisited;
        isVisited[beginWord] = 1;
        while(!queue.empty()){
            string currWord = queue.front();
            queue.pop();
            string tempWord = currWord;
            for(int i = 0; i < currWord.length(); i++){
                for(char x = 'a'; x <= 'z'; x++){
                    if(tempWord[i] == x)
                        continue;
                    tempWord[i] = x;
                    if(dict.count(tempWord) > 0){
                        if(isVisited.count(tempWord) == 0){
                            isVisited[tempWord] = isVisited[currWord]+1;
                            queue.push(tempWord);
                            adjList[currWord].insert(tempWord);
                        }
                        else if(isVisited[tempWord] == isVisited[currWord] + 1){
                            adjList[currWord].insert(tempWord);
                        }
                    }
                }
                tempWord[i] = currWord[i];
            }
        }
        vector<string> path;
        DFS(beginWord, endWord, adjList, path);
        
        return result;
    }
};