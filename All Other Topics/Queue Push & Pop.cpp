queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int>Q;
   for(int i=0;i<n;i++){
       Q.push(arr[i]);
   }
   return Q;
}

void _pop(queue<int>Q)
{
    //print front and dequeue for each element until it becomes empty
    while(!Q.empty()){
        cout<<Q.front()<<" ";
        Q.pop();
    }
} 