#include<iostream>
using namespace std;

class BinarySearchTree {
public:
    
    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int data) : data(data), left(nullptr), right(nullptr) {}
    };
    Node* root;
    BinarySearchTree() : root(nullptr) {}
    

    void insert(int element) {
        root = insertData(root, element);
    }

    Node* insertData(Node* root, int element) {
        if (root == nullptr) {
            root = new Node(element);
        } else if (element < root->data) {
            root->left = insertData(root->left, element);
        } else if (element > root->data) {
            root->right = insertData(root->right, element);
        }
        return root;
    }
    void Inorder(Node *root){
        if(root){
            Inorder(root->left);
            cout<<root->data<<" ";
            Inorder(root->right);
        }
    }
    void Preorder(Node *root){
        if(root){
            cout<<root->data<<" ";
            Preorder(root->left);
            Preorder(root->right);
        }
    }
    void Postorder(Node *root){
        if(root){
            Postorder(root->left);
            Postorder(root->right);
            cout<<root->data<<" ";
        }
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(10);
    bst.insert(60);
    bst.insert(100);
    bst.insert(1);
    cout<<"Inorder: ";
    bst.Inorder(bst.root);
    cout<<endl;
    cout<<"Preorder: ";
    bst.Preorder(bst.root);
    cout<<endl;
    cout<<"Postorder: ";
    bst.Postorder(bst.root);
    return 0;
}
