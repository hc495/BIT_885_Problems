/* 
 * Chinese Comment by GB2312
 * 
 * 题目内容
 * 请给吃建立二叉排序树的算法
 * 
 * 分析
 * 二叉查找树基本算法。
 * 
 * 要点
 * - 建立二叉查找树
*/
# include "../Problems/2005-2-2.c"
# include <vector>

int main() {
    std::vector<int> test = {5,1,2,4,3,8,7,6,9,12};
    int_tree_node* res = BST_build(&*test.begin(), test.size());
    bin_tree_algo::print_tree(res);
    return 0;
}