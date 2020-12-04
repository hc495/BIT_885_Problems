# pragma once

# include <initializer_list>
# include <vector>

namespace bin_tree_algo {

constexpr int null_number = 114514;

template <class value_type>
struct tree_node {
    value_type value;
    tree_node<value_type> *left;
    tree_node<value_type> *right;
    tree_node(value_type _va, tree_node<value_type> *le, tree_node<value_type> *ri) :
        value(_va), left(le), right(ri) { }
};

template <class value_type>
void build_tree(std::initializer_list<value_type> _init_list) {
    auto left_child = [](unsigned int current) {
        return (current + 1) * 2 - 1;
    };
    auto right_child = [](unsigned int current) {
        return (current + 1) * 2;
    };
    std::vector<value_type> heap_tree(_init_list);
    
}

}