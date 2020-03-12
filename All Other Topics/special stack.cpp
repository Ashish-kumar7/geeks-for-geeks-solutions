void push(int a){
     s.push(a);
}
bool isFull(int n){
     //add code here.
     return (s.size()==n);
}
bool isEmpty(){
    return s.empty();
}
int pop(){
    int x=s.top();
    s.pop();
    return x;
}

int getMin()
{
   //add code here.
   int mini=s.top();
   while(!s.empty())
   {
       if(mini>s.top())
       {
           mini=s.top();
       }
       s.pop();
   }
   return mini;
}