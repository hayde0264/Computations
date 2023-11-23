#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
};
class Solution
{
public:
    bool checkTree(TreeNode *root)
    {
        if (root->val == root->left->val + root->right->val)
        {
            return true;
        }
        return false;
    }
};
