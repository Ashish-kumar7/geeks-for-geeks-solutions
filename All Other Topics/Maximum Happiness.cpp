int maxHappiness (int a[], int b[], int n, int R){
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<n;i++){
        pq.push({a[i],b[i]});
    }
    int sum=0;
    while(R--){
        sum=sum+pq.top().first;
        pq.push( { max( 0,(pq.top().first-pq.top().second) ),  (pq.top().second)  }  );
        pq.pop();
    }
    return sum;
}