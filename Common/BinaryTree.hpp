# pragma once

# include <initializer_list>
# include <vector>
# include <queue>
# include <algorithm>
# include <iostream>
# include <sstream>

namespace bin_tree_algo {

constexpr int null_number = 114514;

template <class value_type>
struct tree_node {
    value_type value;
    tree_node<value_type> *left;
    tree_node<value_type> *right;
    tree_node(const value_type &_va, tree_node<value_type> *le, tree_node<value_type> *ri) :
        value(_va), left(le), right(ri) { }
};

template <class value_type>
tree_node<value_type>* build_tree(const std::initializer_list<value_type> &_init_list) {
    auto left_child = [](size_t current) {
        return (current + 1) * 2 - 1;
    };
    auto right_child = [](size_t current) {
        return (current + 1) * 2;
    };
    std::vector<tree_node<value_type>*> tree_heap;
    std::for_each(_init_list.begin(), _init_list.end(), [&tree_heap](value_type _val) {
        if (_val == null_number) tree_heap.push_back(nullptr);
        else tree_heap.push_back(new tree_node<value_type>(_val, nullptr, nullptr));
    });
    for (size_t i = 0; i < tree_heap.size(); i++) {
        if (tree_heap[i] == nullptr) continue;
        tree_heap[i]->left = left_child(i) < tree_heap.size() ? tree_heap[left_child(i)] : nullptr;
        tree_heap[i]->right = right_child(i) < tree_heap.size() ? tree_heap[right_child(i)] : nullptr;
    }
    return tree_heap.front();
}

template <class value_type>
void print_tree(tree_node<value_type> *root) {
    std::queue<tree_node<value_type>*> BFS;
    BFS.push(root);
    while (1) {
        std::stringstream SS;
        size_t current_size = BFS.size();
        size_t elemental_number = 0;
        for (size_t i = 0; i < current_size; i++) {
            if (BFS.front()) {
                SS << BFS.front()->value << ' ';
                BFS.push(BFS.front()->left);
                BFS.push(BFS.front()->right);
                elemental_number++;
            } else {
                SS << '*' << ' ';
                BFS.push(nullptr);
                BFS.push(nullptr);
            }
            BFS.pop();
        }
        SS << '\n';
        if (elemental_number == 0) break;
        std::cout << SS.str();
    }
}

}

typedef bin_tree_algo::tree_node<int> int_tree_node;