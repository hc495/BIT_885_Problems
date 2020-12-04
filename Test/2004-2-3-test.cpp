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
*/

# include "../Problems/2004-2-3.c"
# include <iostream>

int main() {
    int_tree_node* test1 = bin_tree_algo::build_tree({1,2,3,4,5,114514,7,8});
    int_tree_node* test2 = bin_tree_algo::build_tree({1,2,3,5,5,114514,7,8});
    std::cout << compare_trees(test1, test2);
    return 0;
}