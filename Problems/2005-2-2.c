/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 请给吃建立二叉排序树的算法
 * 
 * 分析
 * 二叉查找树基本算法。
 * 程序较长，需要清晰的逻辑。建议打草稿。
 * 
 * 要点
 * - 建立二叉查找树
*/
# include "../Common/BinaryTree.hpp"

/* 如果想要拿来单独运行，请解除下述代码段的注释并去除上边的include项然后自定义一个main */
/*
struct int_tree_node {
    value_type value;
    int_tree_node *left;
    int_tree_node *right;
};
*/

# include <malloc.h>

int_tree_node* BST_build(int* array, unsigned int length) {
    if (!length) return 0;
    int_tree_node* root = (int_tree_node*)malloc(sizeof(int_tree_node));
    root->value = array[0];
    root->left = 0, root->right = 0;
    for (unsigned i = 1; i < length; i++) {
        int_tree_node* current = root;
        while (current) {
            if (current->value < array[i]) {
                if (current->right) {
                    current = current->right;
                } else {
                    current->right = (int_tree_node*)malloc(sizeof(int_tree_node));
                    current->right->value = array[i];
                    current->right->right = 0, current->right->left = 0;
                    break;
                }
            } else {
                if (current->left) {
                    current = current->left;
                } else {
                    current->left = (int_tree_node*)malloc(sizeof(int_tree_node));
                    current->left->value = array[i];
                    current->left->right = 0, current->left->left = 0;
                    break;
                }
            } 
        }
    }
    return root;
}