// Given the root of a binary tree, return the postorder traversal of its nodes' values.
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> res;
        postoder(res, root);
        return res;
    }

private:
    void postoder(vector<int> &res, TreeNode *node)
    {
        if (!node)
            return;
        postoder(res, node->left);
        postoder(res, node->right);
        res.push_back(node->val);
    }
};