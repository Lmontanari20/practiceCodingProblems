/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} targetSum
 * @return {boolean}
 */
var hasPathSum = function (root, targetSum) {
  if (root == null || root == []) {
    return false;
  }
  let value = false;
  let answer = helperRecursion(root, targetSum, 0, value);
  return answer;
};

const helperRecursion = function (root, targetSum, currentSum, value) {
  let newSum = currentSum + root.val;
  if (root.left == null && root.right == null && newSum == targetSum) {
    value = true;
  }
  if (root.left) {
    value = helperRecursion(root.left, targetSum, newSum, value);
  }
  if (root.right) {
    value = helperRecursion(root.right, targetSum, newSum, value);
  }
  return value;
};
