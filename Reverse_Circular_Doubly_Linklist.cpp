// C++ implementation to reverse a
// doubly circular linked list
#include <bits/stdc++.h>

using namespace std;

// structure of a node of linked list
struct Node {
	int data;
	Node *next, *prev;
};

// function to create and return a new node
Node* getNode(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	return newNode;
}

// Function to insert at the end
void insertEnd(Node** head, Node* new_node)
{
	// If the list is empty, create a single node
	// circular and doubly list
	if (*head == NULL) {
		new_node->next = new_node->prev = new_node;
		*head = new_node;
		return;
	}

	// If list is not empty

	/* Find last node */
	Node* last = (*head)->prev;

	// Start is going to be next of new_node
	new_node->next = *head;

	// Make new node previous of start
	(*head)->prev = new_node;

	// Make last previous of new node
	new_node->prev = last;

	// Make new node next of old last
	last->next = new_node;
}

// Utility function to reverse a
// doubly circular linked list
Node* reverse(Node* head)
{
	if (!head)
		return NULL;

	// Initialize a new head pointer
	Node* new_head = NULL;

	// get pointer to the the last node
	Node* last = head->prev;

	// set 'curr' to last node
	Node *curr = last, *prev;

	// traverse list in backward direction
	while (curr->prev != last) {
		prev = curr->prev;

		// insert 'curr' at the end of the list
		// starting with the 'new_head' pointer
		insertEnd(&new_head, curr);
		curr = prev;
	}
	insertEnd(&new_head, curr);

	// head pointer of the reversed list
	return new_head;
}

// function to display a doubly circular list in
// forward and backward direction
void display(Node* head)
{
	if (!head)
		return;

	Node* temp = head;

	cout << "Forward direction: ";
	while (temp->next != head) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data;

	Node* last = head->prev;
	temp = last;

	cout << "\nBackward direction: ";
	while (temp->prev != last) {
		cout << temp->data << " ";
		temp = temp->prev;
	}
	cout << temp->data;
}

// Driver program to test above
int main()
{
	Node* head = NULL;

	insertEnd(&head, getNode(1));
	insertEnd(&head, getNode(2));
	insertEnd(&head, getNode(3));
	insertEnd(&head, getNode(4));
	insertEnd(&head, getNode(5));

	cout << "Current list:\n";
	display(head);

	head = reverse(head);

	cout << "\n\nReversed list:\n";
	display(head);

	return 0;
}
