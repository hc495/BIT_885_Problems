/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 将一个数码倒过来所得到的新数叫原数的反序数。若一个数等于它的反序数，则称它为对称树。
 * 求不超过2006的最大对称数。
 * 
 * 分析
 * 基本算法与2005-1-2一致，白给，别写错。
*/

# include "stdio.h"

int reverse_int(int n) {
    int res = 0;
    while (n) {
        res *= 10;
        res += n % 10; 
        n /= 10;
    }
    return res;
}

int main() {
    for (int i = 0; i <= 2006; i++) {
        if (i == reverse_int(i)) printf("%d\n", i); 
    }
    return 0;
}