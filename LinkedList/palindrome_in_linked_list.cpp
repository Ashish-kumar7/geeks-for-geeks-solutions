#include<bits/stdc++.h>
#include <iostream>

using namespace std;

class node
{   public:

    int data ;
    node * next;
};

bool detect_pallindrome(node*head)
{
   node*slow=head;

   stack<int>s;

   while(slow!=NULL)
   {
       s.push(slow->data);

       slow=slow->next;

   }

   while(head!=NULL)
   {
       int it =s.top();
       s.pop();

       if(head->data!=it)
       {

           return false;

       }
        head=head->next;


   }
    return true;
}


int main()
{

    node *head =new node();
    node *second = new node ();
    node * third =new node ();
    node * fourth =new node ();
    node * fifth =new node ();
    node * sixth =new node ();


    head->data=10;
    head->next=second;

    second ->data=20;
    second ->next=third ;

    third ->data =30;
    third->next=fourth;

    fourth ->data =30;
    fourth->next=fifth;

    fifth ->data =20;
    fifth->next=sixth;

    sixth ->data =100;
    sixth->next=NULL;


    int result=detect_pallindrome(head);

    if(result==1)
    {

        cout<<"palindroem found "<<endl;
    }

    else
    {

        cout<<"palindroem not found "<<endl;
    }


    return 0;
}

