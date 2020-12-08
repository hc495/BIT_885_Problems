/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 请给出统计二叉树叶节点个数的递归算法
 * 
 * 分析
 * 比2题简单，白给DFS递归题。与判断二叉树相同的算法基本一致。
 * 
 * 要点
 * - 叶子节点
*/
# include "../Problems/2005-2-3.c"
# include <vector>

int main() {
    std::vector<int> test = {5,1,2,4,3,8,7,6,9,12};
    int_tree_node* res = bin_tree_algo::build_tree(test);
    std::cout << number_of_node(res);
    return 0;
}