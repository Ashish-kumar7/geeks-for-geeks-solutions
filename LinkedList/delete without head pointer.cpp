void deleteNode(Node *node)
{
   // Your code here
   Node *p=node;
   p->data=p->next->data;
   p->next=p->next->next;
}

