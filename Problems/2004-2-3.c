/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 已知用二叉链表存储二叉树，试编写判断两颗二叉树是否相等的算法。试写明算法的基本思路。
 * 
 * 分析
 * 二叉树相等即两棵树的节点的值完全相等。因此我们可以用BFS或者DFS。
 * 考虑到C语言里没有现成的队列ADT，但有调用栈帧，故选用DFS
 * 
 * 要点
 * - 二叉树的深度优先遍历
 * - C语言无bool类型
 * 
 * 原则上需要在答卷的程序中给出二叉树节点的声明，为测试方便，此处树节点结构体包含在了测试文件库中。
 * 我们假定它的声明是这样的:
 *  struct int_tree_node {
        value_type value;
        int_tree_node *left;
        int_tree_node *right;
    };
 * 
 * 扩展
 * 只需要改动程序中的一行就可以实现“判断两个二叉树是否完全轴对称”，如何修改？
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

int compare_trees(int_tree_node *first, int_tree_node* second) {
    if (!(first && second)) {
        if (first || second) return 0;
        else return 1;
    }
    if (first->value != second->value) return 0;
    return compare_trees(first->left, second->left) && compare_trees(first->right, second->right);
}