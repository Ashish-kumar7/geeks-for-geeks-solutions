void MyQueue:: push(int x)
{
        // Your Code
        QueueNode * temp=new QueueNode(x);
        if(front==NULL)
        {
            front=rear=temp;
            return ;
        }
        rear->next=temp;
        rear=temp;
}


/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code
        if(front==NULL){
            return -1;
        }
        int x=front->data;
        front=front->next;
        return x;
}
