
public class Solution {

    TreeNode current = new TreeNode();

    public TreeNode increasingBST(TreeNode root) {
        if (root == null) {
            return null;
        }
        TreeNode newRoot = current;
        inOrder(root);
        return newRoot.right;
    }

    public void inOrder(TreeNode root) {
        if (root != null) {
            inOrder(root.left);
            current.right = root;
            current.right.left = null;
            current = current.right;
            inOrder(root.right);
        }
    }
}

// Class TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this class.
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
