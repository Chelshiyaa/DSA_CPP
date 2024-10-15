//delete all duplicates

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void deleteDuplicates(Node *head) {
    Node *curr = head;
    while (curr) {
        while (curr->next && curr->data == curr->next->data) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        curr = curr->next;
    }
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

    deleteDuplicates(head);

    cout << "Modified List: ";
    printList(head);

    return 0;
}
