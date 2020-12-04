/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 使用递归方法编写函数，实现将输入的字符串反向保存 (6分)
 * 
 * 分析
 * 本题如果写一般循环的话非常容易。
 * 主要考察通过C的基础操作以及尾递归和循环的转化。
 * 
 * 要点
 * - C类型字符串的长度如何获取？
 * - 循环转尾递归
 * - 输入输出字符串(gets puts) (在代码中未体现)
*/

# include <stdio.h>

void __reverse(char* str, unsigned int left, unsigned int right) {
    if (left >= right) return;
    char temp_char;
    temp_char = str[left]; // 交换字符
    str[left++] = str[right];
    str[right--] = temp_char;
    __reverse(str, left, right); // 递归传递调用
}

void reverse(char* str) { // 驱动函数
    unsigned int length = 0; 
    for (length = 0; str[length]; length++); // 获取字符串长度
    __reverse(str, 0, length - 1);
}