/* 
 * Chinese Comment by GB2312
 * 
 * 测试程序
 * 
 * 题目内容
 * 使用递归方法编写函数，实现将输入的字符串反向保存 (6分)
 * 
 * 关键要点
 * - C类型字符串的长度如何获取？
 * - 递归、递归截止条件
 * - 输入输出字符串(gets puts) (在代码中未体现)
*/

# include "../Problems/2004-1-1.c"
# include <string>
# include <iostream>

int main() {
    std::string test;
    std::getline(std::cin, test);
    char* test_char = (char*)test.c_str();
    reverse(test_char);
    std::cout << test.c_str();

    return 0;
}