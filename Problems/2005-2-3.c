/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 请给出统计二叉树叶节点个数的递归算法
 * 
 * 分析
 * 比2题简单，白给DFS递归题。与判断二叉树相同的算法基本一致。
 * 
 * 要点
 * - 叶子节点
*/

# include "../Common/BinaryTree.hpp"

/* 如果想要拿来单独运行，请解除下述代码段的注释并去除include项然后自定义一个main */
/*
struct int_tree_node {
    value_type value;
    int_tree_node *left;
    int_tree_node *right;
};
*/

int number_of_node(int_tree_node *root) {
    if (!root) return 0;
    if (!(root->left || root->right)) return 1;
    return number_of_node(root->left) + number_of_node(root->right);
}