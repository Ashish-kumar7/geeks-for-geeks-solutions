queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    queue<int>ans;
    stack<int>temp;
    // k=k%(q.size()+1);
    for(int i=0;i<k;i++){
        temp.push(q.front());
        q.pop();
    }
    while(!temp.empty()){
        ans.push(temp.top());
        temp.pop();
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    return ans;
}