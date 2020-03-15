void MyStack ::push(int x) {
    // Your Code
    StackNode * temp=new StackNode(x);
    
    if(top==NULL){
        top=temp;
    }
    else{
        temp->next=top;
        top=temp;
}

}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    if(top==NULL)
    {
        return -1;
    }
    else 
    {
        int x=top->data;
        top=top->next;
        return x;
        
    }
}
