// two pointer check whether two linkedlist are equal or not (if thearrangement of the data in both are same or not)


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

bool isEqual(Node *head1,Node*head2){
    Node *ptr1=head1;
    Node *ptr2=head2;
    while(pt1 && ptr2){
        if(ptr1->data!=ptr2->data) return false;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return(ptr1==NULL && ptr2==NULL);
}