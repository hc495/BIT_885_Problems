/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 有一个保存学生课程成绩的结构数组，保存学生的学号、课程编号和课程成绩。
 * 请编写一个函数，将保存在结构数组中的数据先按照课程编号从小到大，再按照课程成绩从高到低的顺序存放在一个单向链表中。
 * 结构体定义如下 
 *  struct student {
 *      int sno; // 学生编号
 *      int cno; // 课程编号
 *      float score;
 *  };
 * 
 * 分析
 * 与2005-1-4大致相似，只是需要重新编写一下
 * 
 * 要点
 * - 链表的头插法构建
 * - malloc函数
 * - 快速排序qsort的库包含及调用
 * - 函数指针、void指针及指针类型转换
 * 
 * 背景知识
 * qsort方法中比较函数的返回值
 *  int compare(const void* a, const void* b)中：
 *  若返回值为负整数，则a会被排在b之前
 *  若返回值为正整数，则a会被排在b之后
 *  若返回值是0，则a和b不区分前后
*/

# include "../Problems/2006-1-4.c"
# include <vector>
# include "../Common/Lists.hpp"

std::ostream& operator<<(std::ostream& OS, student stu) {
    return OS << stu.sno << ',' << stu.cno << ',' << stu.score << '\n';
}

int main() {
    std::vector<student> test = {{1, 3, 15}, {2, 3, 25}, {3, 3, 18}, {4, 1, 48}};
    node_stu* res = sort_student(&*test.begin(), test.size());
    list_algo::print_list(res);
    return 0;
}