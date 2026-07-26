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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        // If both nodes are NULL, they are identical
        if (p == NULL && q == NULL)
        {
            return true;
        }
        // If only one of the nodes is NULL, they are not identical
        if (p == NULL || q == NULL)
        {
            return false;
        }
        // Check if values are equal and recursively check left and right subtrees
        if (p->val == q->val)
        {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        // Values are not equal, they are not identical
        return false;
    }
};
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        return Ismirror(root->left, root->right);
    }

private:
    bool Ismirror(TreeNode *n1, TreeNode *n2)
    {
        if (n1 == nullptr && n2 == nullptr)
            return true;
        if (n1 == nullptr || n2 == nullptr)
            return false;
        return n1->val && Ismirror(n1->left, n2->right) && Ismirror(n1->right, n2->left);
    }
};