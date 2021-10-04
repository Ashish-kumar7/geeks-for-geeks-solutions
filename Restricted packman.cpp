class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node * slow=head;
        Node * fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;class Solution{
    public:
    int candies(int m, int n){ 
    	int X = (m * n) - m - n;
    	unordered_set<int> s;
    	queue<int> q; 
    	q.push(X); 
    	s.insert(X);
    	int count = 0; 
    	while (q.size() > 0) {
    		int curr = q.front(); 
    		q.pop(); 
    		count++;
    		int k = curr-m;
    		if (k > 0 && (s.find(k) == s.end())) {
    			q.push(k); 
    			s.insert(k);
    		}
    		int l = curr-n;
    		if (l > 0 && (s.find(l) == s.end())){
    			q.push(l); 
    			s.insert(l);
    		}
    	} 
    	return count; 
    } 
};
            slow=slow->next;
        }
        
        return slow->data;
    }
};