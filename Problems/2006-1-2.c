/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 一个自然数被8除余1，所得之商被8除也余1，再将第二次的商被8除后余7，最后得到一个商为a。
 * 又知道被17除余4，所得的商被17除余15，最后得到一个商是a的二倍。
 * 求这个自然数
 * 
 * 分析
 * 标准翻译题，认真点就不会错
 * 这个数应该是1993
*/

unsigned int get_number() {
    for (unsigned int a = 0; ; a++) {
        unsigned int current = ((a * 8 + 7) * 8 + 1) * 8 + 1;
        if (current % 17 == 4 && current / 17 % 17 == 15 && current / 17 / 17 == 2 * a)
            return current;
    }
}