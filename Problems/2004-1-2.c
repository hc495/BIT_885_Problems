/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 编写程序，从键盘上输入一个字符串，然后将输入的字符串按照字符的ASCII值排序，删除字符串中的空格，
 * 且相同的字符在串中仅出现一次，将排序后的字符串在屏幕上显示
 * 
 * 分析
 * 主要考察计数排序的退化情况和ASCII码
 * 
 * 要点
 * - 计数排序的退化情况
 * - 字符串输入和输出
 * - 数组、数组的初始化
 * - 基础ASCII码有127个，扩展打印字符集有256个
 * 
 * 附加知识：几个重要的ASCII
 *  ' '      32
 *  '0'      48
 *  'A'      65
 *  'a'      97 
*/

# include <stdio.h>

int main() {
    int index[256] = { 0 };
    char str[1024];  // 虽然这种写法很不漂亮，但考试所迫，必须如此(否则代码的篇幅会变得很长)
    gets(str);
    for (unsigned int i = 0; str[i]; i++) index[str[i]]++;
    for (unsigned int i = 0; i < 256; i++) {
        if (i != 32 && index[i]) putchar(i); // 空格的ASCII是32
    }
    return 0;
}