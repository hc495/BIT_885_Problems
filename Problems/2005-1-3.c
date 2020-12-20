/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 编写程序，实现从键盘上输入两个字符串，将它们合并之后按ASCII码值从大到小排序在屏幕输出，相同的字符仅输出一次。
 * 
 * 分析
 * 算法与2004-1-2完全一致，使用计数排序的退化情况。
 * 
 * 要点
 * - 计数排序的退化情况
*/
# include <stdio.h>

int main() {
    int index[256] = { 0 };
    char str1[1024], str2[1024];  // 虽然这种写法很不漂亮，但考试所迫，必须如此(否则代码的篇幅会变得很长) 
    gets(str1);
    gets(str2);
    for (unsigned int i = 0; str1[i]; i++) index[str1[i]]++;
    for (unsigned int i = 0; str2[i]; i++) index[str2[i]]++;
    for (unsigned int i = 0; i < 256; i++) {
        if (index[i]) putchar(i);
    }
    return 0;
}