int count(Node * start,int &count1){
    if(start==NULL){
        return count1;
    }
    if(start!=NULL){
        count1++;
        count(start->next,count1);
    }
    return count1;
}

int count2(Node * start1,int & p,int & data1){
    if(start1==NULL || p<=0){
        return data1 ;
    }
    if(start1!=NULL){
        p--;
        data1=start1->data;
        count2(start1->next,p,data1);
    }
    return data1;
}


int getMiddle(Node *head){
   Node * start=head;
   int count1=0;
   count(start,count1);
   int x=count1;
  int p=x/2 + 1;
  int data1=0;
   count2(head,p,data1);
   return data1;
}