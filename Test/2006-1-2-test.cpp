/* 
 * Chinese Comment by UTF-8
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

# include "../Problems/2006-1-2.c"
# include <iostream>

int main() {
    std::cout << get_number();
    return 0;
}