
void insert(node** root, int item){ 
    node* temp = new node; 
    node* ptr; 
    temp->data = item; 
    temp->next = NULL; 
  
    if (*root == NULL) 
        *root = temp; 
    else { 
        ptr = *root; 
        while (ptr->next != NULL) 
            ptr = ptr->next; 
        ptr->next = temp; 
    } 
}
 node *arrayToList(vector<int>A, int n) { 
    node *root = NULL; 
    for (int i = 0; i < n; i++) 
        insert(&root, A[i]); 
   return root; 
}
 node* findIntersection(node* head1,  node* head2){
    map<int,int>mp;
    node * current=head1;
    while(current!=NULL){   
        int index=current->data;
        mp[index]++;
        current=current->next;
    }
    node * current2=head2;
    while(current2!=NULL){   
        int index=current2->data;
        mp[index]++;
        current2=current2->next;
    }
    map<int,int>:: iterator it;
    vector<int>A;
    for(it=mp.begin();it!=mp.end();++it){
        if(it->second==2){
            A.push_back(it->first);
        }
    }
    int n=A.size();
    node* p=arrayToList(A,n) ;
    return p; 
}
