
void show(Node *node) 
{ 
while(node!= NULL) 
    { 
    cout<<node->coeff<<"x"<<"^"<<node->pow;
        node = node->next; 

    if(node) 
        cout<<" + "; 
    } 

} 


void addition(Node*p1,Node*p2,Node*p3 )
{
    while(p1->next!=NULL && p2->next!=NULL)
    {
        if(p1->pow > p2->pow)
        {
            p3->pow=p1->pow;
            p3->coeff=p1->coeff;
            p1=p1->next;
        }
       else if(p2->pow > p1->pow)
        {
            p3->pow=p2->pow;
            p3->coeff=p2->coeff;
            p2=p2->next;
        }
        else 
        {
            p3->pow=p1->pow;
            p3->coeff=p1->coeff+p2->coeff;
            p1=p1->next;
            p2=p2->next;
        }
         Node * a= new Node(0,0);
        p3->next=a;
        
        p3=p3->next;
        p3->next=NULL;
    }
    while( p1->next!=NULL || p2->next!=NULL)
    {
        if(p1->next!=NULL)
        {
            p3->pow=p1->pow;
            p3->coeff=p1->coeff;
            
        }
        if(p2->next!=NULL)
        {
            p3->pow=p2->pow;
            p3->coeff=p2->coeff;
        
        }
        p3->next=new Node(0,0);
        //p3->next=a;
        p3=p3->next;
        p3->next=NULL;
    }
    if(p1->pow==p2->pow){
        if(p1->pow > p2->pow)
        {
            p3->pow=p1->pow;
            p3->coeff=p1->coeff;
            p1=p1->next;
        }
        if(p2->pow > p1->pow)
        {
            p3->pow=p2->pow;
            p3->coeff=p2->coeff;
            p2=p2->next;
        }
        if(p2->pow == p1->pow)
        {
            p3->pow=p1->pow;
            p3->coeff=p1->coeff+p2->coeff;
        }
    }
    else{
        int q=2;
        while(q--){
        if(p1->pow > p2->pow)
        {
            p3->pow=p1->pow;
            p3->coeff=p1->coeff;
            
        }
        if(p2->pow > p1->pow)
        {
            p3->pow=p2->pow;
            p3->coeff=p2->coeff;
            
        }
        if(q==1){
        p3->next=new Node(0,0);
        //p3->next=a;
        p3=p3->next;
        p3->next=NULL;
        }
        
        
        
        
        }
    }
        
        
        
        
        
    }
    
void addPolynomial(Node *p1, Node *p2){
    Node * p3=new Node(0,0);
    addition(p1,p2,p3);
  //  cout<<p3->coeff;
   show(p3);
    
    
    
    
    
    
}