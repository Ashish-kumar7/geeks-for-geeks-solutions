//User function Template for C++

/* Function to implement push operation in priority_queue
* pq : priority_queue
* x : element to be pushed
*/
void push_pq(priority_queue<int, vector<int>, greater<int>> &pq, int x){
    
    // Your code here
    pq.push(x);
    
}

/* Function to implement pop operation in priority_queue
* pq : priority_queue
*/
void pp_pq(priority_queue<int, vector<int>, greater<int>> &pq){
   
    if(!pq.empty()){
        pq.pop();
    }
    /*Your code here*/
    else
    return;
    
}

/* Function to implement top operation in priority_queue
* pq : priority_queue
*/
int pq_top(priority_queue<int, vector<int>, greater<int>> &pq){
    
    if(!pq.empty())
    {
        return pq.top();
    }
    /*Your code here*/
    else
    return -1;
    
}