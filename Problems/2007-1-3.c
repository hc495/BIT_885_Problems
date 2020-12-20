/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 请编写一个求字符串长度的递归函数，函数原型为：int strlong(char *string)
 * 
 * 分析
 * 传统艺能：循环转尾递归
 */
 
int strlong(char* string) {
    if (string[0] == '\0') return 0;
    else return strlong(string + 1) + 1;
}