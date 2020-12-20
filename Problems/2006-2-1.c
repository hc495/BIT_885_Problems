/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 请给出层序遍历二叉树的算法
 * 
 * 分析
 * 基本BFS，简单得很。
 * 这都不会你考个锤子计算机。
*/

# include "../Common/BinaryTree.hpp"
# include "../Common/CQueue.hpp"

/* 如果想要拿来单独运行，请解除下述代码段的注释并去除include项然后自定义一个main */
/*
struct int_tree_node {
    value_type value;
    int_tree_node *left;
    int_tree_node *right;
};
*/

void BFS_handle(int_tree_node* node) {
    printf("%d ", node->value);
}

void BFS(int_tree_node* root) {
    CQueue_node_int my_queue;
    init_queue(my_queue);
    queue_push(my_queue, root);
    int BFS_size;
    while (BFS_size = queue_size(my_queue)) {
        for (int i = 0; i < BFS_size; i++) {
            int_tree_node* current = queue_pop(my_queue);
            BFS_handle(current);
            if (current->left) queue_push(my_queue, current->left);
            if (current->right) queue_push(my_queue, current->right);
        }
    }
}