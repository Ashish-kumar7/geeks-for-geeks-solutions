void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code 
        if(q1.empty()){
            return -1;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int vv=q1.front();
        q1.pop();
        queue<int>q;
        q=q1;
        q1=q2;
        q2=q;
        return vv;
}