/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 一个自然数的七进制表示是一个三位数，而这个自然数的九进制表示也是一个三位数，
 * 且这两个三位数的数码顺序刚好相反，求这个三位数
 * 
 * 分析
 * 基本进制转换题。然后还有传统艺能"反着写"，基本白送。
 */

int find_number() {
    for (int i = 7 * 7 * 7; i < 7 * 7 * 7 * 7; i++) {
        int temp_num = i;
        int num_in_7 = 0, num_in_9 = 0;
        while (temp_num) {
            num_in_7 *= 10;
            num_in_7 += temp_num % 7;
            temp_num /= 7;
        }
        temp_num = i;
        while (temp_num) {
            num_in_9 *= 10;
            num_in_9 += temp_num % 9;
            temp_num /= 9;
        }
        int reversed_num_9 = 0;
        while (num_in_9) {
            reversed_num_9 *= 10;
            reversed_num_9 += num_in_9 & 10;
            num_in_9 /= 10;
        }
        if (reversed_num_9 == num_in_7) return i;
    }
    return -1;
}