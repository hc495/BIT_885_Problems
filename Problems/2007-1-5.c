/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 输入一个长度不超过100的字符串，删除串中的重复字符。如
 * 原串：abacaeedabcdcd
 * 输出：abced
 * 
 * 分析
 * 可以使用一个哈希表来记录。
 * 如果使用指针传出数据，注意内存要开在堆上
 */
# include <string.h>
# include <stdlib.h>

void unique(char* string) {
    unsigned int length = strlen(string);
    char result[length] = { '\0' };
    int writing_loca = 0;
    char hash[256] = { 0 };
    for (unsigned int i = 0; i < length; i++) {
        if (hash[string[i]]) continue;
        else {
            result[writing_loca++] = string[i];
            hash[string[i]] = 1;
        }
    }
    memcpy(string, result, length * sizeof(char));
}