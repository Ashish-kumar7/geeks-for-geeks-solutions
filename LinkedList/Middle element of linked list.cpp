int getMiddle(Node *head)
    {
        Node* fast = head->next;
        Node* slow = head;
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow->data;
    }
