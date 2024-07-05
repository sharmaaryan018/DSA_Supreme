#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* removeDuplicates(Node* head) {
    if (head == NULL)
        return NULL;

    Node* curr = head;

    while (curr != NULL) {
        if ((curr->next != NULL) && curr->data == curr->next->data) {
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = next_next;
        } else {
            curr = curr->next;
        }
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a sorted linked list with duplicates
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);

    cout << "Original list: ";
    printList(head);

    head = removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    // Free the remaining nodes
    Node* current = head;
    Node* next = nullptr;
    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
