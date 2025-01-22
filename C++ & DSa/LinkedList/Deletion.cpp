#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void deletion(int element, Node *&head) {
    Node *fast = head;  // Initialize `fast` to traverse the list
    Node *slow = NULL;  // Initialize `slow` to keep track of the previous node
    Node *temp = head;  // Temporary pointer to find the node to delete

    // Traverse the list to find the node with the given `element`
    while (temp && temp->data != element) {
        slow = temp;
        temp = temp->next;
        fast = (temp ? temp->next : NULL);
    }

    if (temp == NULL) {
        cout << "Element not found" << endl;
        return;
    }

    // If the node to delete is the head
    if (slow == NULL) {
        head = head->next;  // Move the head pointer to the next node
    } else {
        slow->next = temp->next;  // Bypass the node to delete
    }

    delete temp;  // Free the memory of the deleted node
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original List: ";
    printList(head);

    deletion(10, head);

    cout << "Modified List: ";
    printList(head);

    return 0;
}
