
int count(Node * start,int & count1){
    if(start==NULL){
        return count1;
    }
    if(start!=NULL){
        count1++;
        count(start->next,count1);
    }
    return count1;
}
int count2(Node * head,int & p,int & data1){
    if(head==NULL || p<=0){
        return data1;
    }
    
    if(head!=NULL && p>0){
        p--;
        data1=head->data;
        count2(head->next,p,data1);
    }
    return data1;
}


int getNthFromLast(Node *head, int n){
       int count1=0;
       Node * start=head;
       int j=count(start,count1);
      int p=j-n+1;
      int data1=-1;
      int y=count2(head,p,data1);
       return y;
}