#include <iostream>
using namespace std;

class Node {
  public: 
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
      data = value;
      next = nullptr;
      prev = nullptr;
    }
};

class CircularDoublyLinkedList {
  private:
    Node* head;
  public: 
    CircularDoublyLinkedList() {
      head = nullptr;
    }

    void insert(int value) {
      Node* newNode = new Node(value);

      if (head == nullptr) {
        head = newNode;
        head -> next = head;
        head -> prev = head;
      } else {
        Node* tail = head -> prev;

        tail -> next = newNode;
        newNode -> prev = tail;

        newNode -> next = head;
        head -> prev = newNode;
      }
    }

    void display() {
      if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
      }

      Node* temp = head;
      do {
        cout << temp->data << " ";
        temp = temp->next;
      } while (temp != head);
      cout << endl;
    };
};

int main () {
      CircularDoublyLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    cout << "Circular Doubly Linked List: ";
    list.display();

  return 0;
}