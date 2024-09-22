#include <iostream>
using namespace std;

struct Node {
  int data; 
  Node* next;
  Node* prev;

  Node(int value) {
    data = value;
    next = nullptr;
    prev = nullptr;
  }
};

void insertAtEnd(Node*& head, int value) {
  Node* newNode = new Node(value);

  if (head == nullptr) {
    head = newNode;
  } else {
    Node* temp = head;
    while (temp -> next != nullptr) {
      temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
  }
}

void printList(Node* head) {
  Node* temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " <-> ";
    temp = temp -> next;
  }
  cout << "nullptr" << endl;
}

int main () {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    printList(head);

  return 0;
}
