queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    queue<ll>ans;
    stack<ll>temp;
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