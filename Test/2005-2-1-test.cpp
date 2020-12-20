/* 
 * Chinese Comment by UTF-8
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
 * 如果没有把握临场编写这一程序，建议背诵之。
 * 
 * 要点
 * - 反转链表
*/
# include "../Common/Lists.hpp"
# include "../Problems/2005-2-1.c"

int main() {
    list_algo::node<int> *test = list_algo::list_get({1, 2, 3, 4, 5, 6, 7});
    list_algo::node<int> *res = reverse_list(test);
    list_algo::print_list(res);
    return 0;
}