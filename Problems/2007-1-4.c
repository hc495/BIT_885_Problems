/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 按以下规则生成数列：
 * 1. 前2项为2和3
 * 2. 若(n - 1)和(n - 2)项的乘积为一位数，则n项就是这个一位数
 * 3. 若上述乘积是两位数，则第n项和第(n + 1)分别是这个数的十位和个位数
 * 请求出这个数列的第n项。
 * 
 * 分析
 * 翻译题。模拟算法即可
 */
 
int get_in_list(unsigned int loca) {
    int list[loca + 1]; // 多开一个是为了防止最后一次计算大于10
    list[0] = 2, list[1] = 3;
    for (int i = 2; i < loca; i++) {
        int temp = list[i - 1] * list[i - 2];
        if (temp >= 10) {
            list[i++] = temp / 10;
            list[i] = temp % 10;
        } else {
            list[i] = temp;
        }
    }
    return list[loca - 1];
}