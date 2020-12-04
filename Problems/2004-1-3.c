/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 已知有一个含有n个节点的环形链表，定义如下：
    struct node {
        int value;
        struct node* next; 
    };
 * 编写函数，查找链表中的value成员数值最小节点，并输出其value值
 * 
 * 分析
 * 请务必注意本题目的链表是环形表，故不可以用指针域为null来作为遍历的截止条件
 * 
 * 要点
 * - 环形链表遍历
 * - 截止条件务必认真考虑
 * 
 * 为测试方便，此处链表节点结构体的名称有所改变(从node变为node_int)
 * 且均包含在了测试文件库中。
 * 
*/

/* 如果想要拿来运行，请解除下述代码段的注释 */
/*
struct node_int {
    int value;
    struct node_int* next; 
};
*/

# include "stdio.h"
# include "../Common/Lists.hpp"

void findMin(node_int* head, unsigned int length) {
    node_int *min_node = head;
    for (unsigned int i = 0; i < length; i++, head = head->next) {
        if (head->value < min_node->value) min_node = head;
    }
    printf("%d", min_node->value);
}