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
void insertAtBeg(Node *&head, int x) {
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;  // Update head to point to the new node
}
void insertAtPos(Node *&head, int val, int pos) {
    if (pos == 1) insertAtBeg(head, val);
    Node *new_node = new Node(val);
    int curr = 1;
    Node *temp = head;
    while (curr < pos - 1 && temp != NULL) {
        temp = temp->next;
        curr++;
    }
    if (temp == NULL) cout << "Position out of range" << endl;
    new_node->next = temp->next;
    temp->next = new_node;
}
void insertAtEnd(Node *&head, int x) {
    Node *new_node = new Node(x);
    if (head == NULL) head = new_node;
    Node *temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = new_node;
}
void DeleteAtBeg(Node *&head) {  
    if (head == NULL)  cout << "List is already empty" << endl;
    Node *temp = head;
    head = head->next;
    delete temp; 
}
void deletAtTail(Node *&head){
    Node *Second_last=head;
    while(Second_last->next->next!=NULL)Second_last=Second_last->next;
    Node *temp=Second_last->next->next;
    Second_last->next=NULL;
    free(temp);
}
void DeletionAtPoint(Node *head,int pos){
    int curr=0;
    Node *prev=head;
    while(curr!=pos-1){
        prev=prev->next;
        curr++;
    }
    Node *temp=prev->next;
    prev->next=prev->next->next;
    free(temp);
}
void insertafter(Node *head, int data1, int data2) {
    Node *new_node = new Node(data2);
    Node *current = head;
    while (current && current->next) {
        if (current->data == data1) {
            new_node->next = current->next;
            current->next = new_node;
            return; 
        }
        current = current->next;
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
    Node *head = NULL;
    insertAtBeg(head, 20);  // Update head
    insertAtBeg(head, 30);  // Update head
    insertAtBeg(head, 40);  // Update headinsertAtBeg(head, 20);  // Update head
    insertAtBeg(head, 50);  // Update head
    insertAtBeg(head, 60);  // Update head
    insertAtEnd(head, 70);  // Insert at end
    insertAtEnd(head, 80);  // Insert at end
    insertAtPos(head, 25, 2); // Insert at position 2
    printList(head);
    DeleteAtBeg(head);
    printList(head);
    deletAtTail(head);
    printList(head);
    DeletionAtPoint(head,3);
    printList(head);
    return 0;
}
