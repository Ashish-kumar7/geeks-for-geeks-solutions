#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *next;

  node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

node *add(node *root) {
  int data;
  cin >> data;
  if (root == NULL) {
    root = new node(data);
    return root;
  }

  node *temp = root;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new node(data);
  return root;
}

void print(node *root) {
  while (root != NULL) {
    cout << root->data << " ";
    root = root->next;
  }
  return;
}
// insert a node at the beginning of a linked list

node *addAtTheBeginning(node *root) {
  int data;
  cin >> data;
  if (root == NULL) {
    return = new node(data);
  }
  node *temp = new node(data);
  temp->next = root;
  root = temp;
  return root;
}

int main() {
  // your code goes here
  node *root = NULL;
  cout << "Enter number of nodes you want to enter to the linkedlist: ";
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    root = add(root);
  }
  print(root);
  cout << endl;

  root = addAtTheBeginning(root);
  print(root);

  return 0;
}