/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 设有一个表头指针为h1的单链表。试设计一个算法，通过遍历一趟链表，将链表中所有节点的链接方向逆转。
 * 要求逆转之后的结果链表的表头指针h1指向原链表的最后一个节点。
 * 
 * 分析
 * 标准的反转链表题。
 * 反转链表实际上就是建立链表，不要对"反转"产生过多的恐惧。
 * 建议做https://leetcode-cn.com/problems/reverse-linked-list/来练习。
 * 非常典型的程序。
 * 如果没有把我临场编写这一程序，建议背诵之。
 * 
 * 要点
 * - 反转链表
*/
# include "../Common/Lists.hpp"

/* 如果想要拿来单独运行，请解除下述代码段的注释并去除include项然后自定义一个main */
/*
struct node_int {
    int value;
    struct node_int* next; 
};
*/

node_int* reverse_list(node_int* h1) {
    node_int *current = 0, *__next = h1;
    while (__next) {
        node_int* temp_next = __next->next;
        __next->next = current;
        current = __next;
        __next = temp_next;
    }
    return current;
}