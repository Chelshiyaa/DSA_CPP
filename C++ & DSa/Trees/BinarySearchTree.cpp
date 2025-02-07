#include <iostream>
#include <algorithm> 
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
            return new Node(element);
        } else if (element < root->data) {
            root->left = insertData(root->left, element);
        } else if (element > root->data) {
            root->right = insertData(root->right, element);
        }
        return root;
    }

    Node* insertiterative(Node* root, int ele) {
        if (root == nullptr) return new Node(ele);
        Node* curr = root;
        while (true) {
            if (ele < curr->data) {
                if (curr->left == nullptr) {
                    curr->left = new Node(ele);
                    break;
                }
                curr = curr->left;
            } else {
                if (curr->right == nullptr) {
                    curr->right = new Node(ele);
                    break;
                }
                curr = curr->right;
            }
        }
        return root;
    }

    int height(Node* root) {
        if (root == nullptr) return -1;  // Return -1 for edges, 0 for nodes
        return max(height(root->left), height(root->right)) + 1;
    }

    int getHeight() {
        return height(root);
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(10);
    bst.insert(60);
    bst.insert(100);
    bst.insert(1);
    
    bst.root = bst.insertiterative(bst.root, 3); // Fixed function call
    
    // Print the height of the tree
    cout << "Height of the tree: " << bst.getHeight() << endl;

    return 0;
}
