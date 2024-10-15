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

void deleteAtPoint(Node *&head, int pos) {
    if (pos == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int curr = 1;
    Node *prev = head;
    while (curr<pos-1) {
        prev = prev->next;
        curr++;
    }
    Node *temp = prev->next;
    prev->next = prev->next->next;
    delete temp;
}

void deleteAlter(Node *head) {
    int curr = 1;
    Node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        deleteAtPoint(head, curr + 1);
        temp = temp->next;
        curr++;
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

    deleteAlter(head);

    cout << "Modified List: ";
    printList(head);

    return 0;
}
