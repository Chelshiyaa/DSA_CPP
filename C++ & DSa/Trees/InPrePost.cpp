#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> PreInPostTraversal(TreeNode* root) {
        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        vector<int> pre, in, post;

        if (root == NULL) return {pre, in, post};

        while (!st.empty()) {
            auto it = st.top();
            st.pop();

            if (it.second == 1) { // Preorder
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);
                if (it.first->left != NULL) {
                    st.push({it.first->left, 1});
                }
            } else if (it.second == 2) { // Inorder
                in.push_back(it.first->val);
                it.second++;
                st.push(it);
                if (it.first->right != NULL) {
                    st.push({it.first->right, 1});
                }
            } else { // Postorder
                post.push_back(it.first->val);
            }
        }

        return {pre, in, post};
    }
};

// Helper function to build a binary tree for testing
TreeNode* buildTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}

// Main function to test the code
int main() {
    Solution sol;
    TreeNode* root = buildTree();

    vector<vector<int>> result = sol.PreInPostTraversal(root);

    cout << "Preorder: ";
    for (int val : result[0]) cout << val << " ";
    cout << "\n";

    cout << "Inorder: ";
    for (int val : result[1]) cout << val << " ";
    cout << "\n";

    cout << "Postorder: ";
    for (int val : result[2]) cout << val << " ";
    cout << "\n";

    return 0;
}
