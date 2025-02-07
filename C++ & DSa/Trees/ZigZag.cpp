#include<iostream>
#include<stack>
#include<queue>
using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
 class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            if(root==NULL) return 0;
            stack<int>st;
            queue<int>q;
            

        }
    };