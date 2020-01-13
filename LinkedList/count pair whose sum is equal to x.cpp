int countPairs(struct Node* head1, struct Node* head2,	int x)
{
      map<int,int>mp;
      Node * current1=head1;
      int index;
      int value=0;
     while(current1!=NULL){
          index=current1->data;
          mp[index]++;
          current1=current1->next;
      }
      Node *current2=head2;
      Node *current3=current2;
      while(current2!=NULL){
          current2->data=x-(current2->data);
          current2=current2->next;
      }
      int index3;
      while(current3!=NULL){
          index3=current3->data;
          
          mp[index3]++;
          current3=current3->next;
      }
      int count=0;
      map<int,int> :: iterator it;
      for(it=mp.begin();it!=mp.end();++it){
        if(it->second==2){
            count++;
        }
      }
return count;
}