void SortedStack :: sort()
{
priority_queue<int,vector<int>,greater<int>>pq;
   while(!s.empty()){
       pq.push(s.top());
       s.pop();
   }
   
   while(!pq.empty()){
       s.push(pq.top());
       pq.pop();
   }
   
}