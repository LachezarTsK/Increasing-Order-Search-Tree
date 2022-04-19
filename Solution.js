
// Function TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this function.
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}

/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var increasingBST = function (root) {
    if (root === null) {
        return null;
    }
    this.current = new TreeNode();
    const newRoot = current;
    inOrder(root);
    return newRoot.right;
};

/**
 * @param {TreeNode} root
 * @return {void}
 */
function inOrder(root) {
    if (root !== null) {
        inOrder(root.left);
        this.current.right = root;
        this.current.right.left = null;
        this.current = this.current.right;
        inOrder(root.right);
    }
}
