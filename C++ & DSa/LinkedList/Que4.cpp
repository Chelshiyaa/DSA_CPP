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
bool isEqual(Node *head1, Node *head2) {
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    while(ptr1 && ptr2) {  // Corrected 'pt1' to 'ptr1'
        if(ptr1->data != ptr2->data) 
            return false;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1 == NULL && ptr2 == NULL);
}
int main() {
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);

    Node *head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);

    if(isEqual(head1, head2)) {
        cout << "The linked lists are equal!" << endl;
    } else {
        cout << "The linked lists are not equal!" << endl;
    }

    return 0;
}
