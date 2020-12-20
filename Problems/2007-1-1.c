/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 从键盘上输入整数n，将n分解为若干质数之积，并输出之。
 * 
 * 分析
 * 算是一道比较有水平的题目。个人建议使用递归来做会比较快乐。
 *  
 * 代码解释
 * 边找因数，边检验输入数是否是素数。若是素数，直接输出，若不是素数，一分为二，分别进行。
 * 对素数输入的效率可能在O(n)。
 */

# include <stdio.h>

void divid(unsigned int target) {
    for (unsigned int i = 2; i <= target; i++) {
        if (i == target) {
            printf("%d", target);
            return;
        } else if (target % i == 0) {
            divid(i);
            return divid(target / i);
        }
    }
}