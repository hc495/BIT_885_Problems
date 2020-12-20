/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 编写函数，采用递归方法实现将输入的字符串反向输出
 * 
 * 分析
 * 基础递归，为了考递归而考递归，没什么意思。
*/

# include <stdio.h>
# include <string.h>

void __reverse_output(char* _str, unsigned int loca, unsigned int length) {
    if (loca >= length) return;
    __reverse_output(_str, loca + 1, length);
    printf("%c", _str[loca]);
}

void reverse_output() {
    char _str[1024];
    gets(_str);
    __reverse_output(_str, 0, strlen(_str));
}