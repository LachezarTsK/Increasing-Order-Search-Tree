
using namespace std;

// Struct TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this struct.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
    TreeNode* current = new TreeNode();

public:
    TreeNode* increasingBST(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }
        TreeNode* newRoot = current;
        inOrder(root);
        return newRoot->right;
    }

private:
    void inOrder(TreeNode* root) {
        if (root != nullptr) {
            inOrder(root->left);
            current->right = root;
            current->right->left = nullptr;
            current = current->right;
            inOrder(root->right);
        }
    }
};
