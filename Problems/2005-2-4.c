/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 已知一个无符号整数n，写一算法，将其转化为8进制数。要求用链栈来实现。
 * 
 * 分析
 * 没啥意思的题，为了用栈而用栈。
 * 考研可以将链栈当作ADT来用，但是如果纸面有富裕，建议简单地实现一下。
 * 
 * 要点
 * - 链栈ADT
*/

# include "../Common/Lists.hpp"
# include <malloc.h>
# include <stdio.h>

typedef node_int* stack;

stack initstack() {
    stack res = (stack)malloc(sizeof(node_int));
    res->next = 0;
    res->value = 0;
    return res;
}

int empty(stack sta) {
    return sta->next == 0;
}

void push(stack sta, int value) {
    node_int* temp = (node_int*)malloc(sizeof(node_int));
    temp->next = sta->next;
    temp->value = value;
    sta->next = temp;
}

int pop(stack sta) {
    node_int* temp = sta->next;
    int res = temp->value;
    sta->next = sta->next->next;
    free(temp);
    return res;
}

// 以上内容考试时如无要求可以不写

void trans(int n) {
    stack numStack = initstack();
    while (n) {
        push(numStack, n % 8);
        n /= 8;
    }
    while (!empty(numStack)) {
        int temp = pop(numStack);
        printf("%d", temp);
    }
}