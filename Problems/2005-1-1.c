/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 有五个各不相同的正整数，它们的和是135，且按照从小到大的顺序，后面一个数是前面一个数的整倍数。
 * 编写程序求这几个数。
 * 
 * 分析
 * 翻译题。将题意用编程语言重新写一遍即可。鉴于数字很小，选用五重循环。
*/
#include <stdio.h>

int main() {
    for (unsigned int i = 1; i <= 135; i++)
        for (unsigned int j = 2; i * j <= 135; j++) 
            for (unsigned int k = 2; i * j * k <= 135; k++)
                for (unsigned int l = 2; i * j * k * l <= 135; l++) 
                    for (unsigned int m = 2; i * j * k * l * m <= 135; m++)
                        if (i + i * j + i * j * k + i * j * k * l + i * j * k * l * m == 135)
                            printf("%ud, %ud, %ud, %ud, %ud\n", i, i * j, i * j * k, i * j * k * l, i * j * k * l * m);
    return 0;
}