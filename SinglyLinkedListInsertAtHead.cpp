#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr; // Use nullptr instead of NULL
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr; // Initialize the head to nullptr
    }

    void insertAtHead(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "->NULL" << endl;
    }

    // Add more methods as needed for your application
};

int main() {
    LinkedList list;

    list.insertAtHead(1);
    list.display();
    list.insertAtHead(2);
    list.display();
    list.insertAtTail(3);
    list.display();
    list.insertAtTail(4);
    list.display();

    return 0;
}
