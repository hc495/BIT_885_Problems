# pragma once

# include <initializer_list>
# include <utility>
# include <iostream>

namespace list_algo {

template <class value_type>
struct node {
    value_type value;
    struct node* next; 
    node() = default;
    node(value_type val, struct node<value_type>* nxt) : value(val), next(nxt) { }
};

template <class value_type>
node<value_type>* list_get(std::initializer_list<value_type> _init_list) {
    node<value_type> *head, *current;
    head = new node<value_type>(*_init_list.begin(), nullptr);
    current = head;
    for (typename std::initializer_list<value_type>::iterator i = _init_list.begin() + 1; i != _init_list.end(); ++i) {
        node<value_type> *tempPtN = new node<value_type>(*i, nullptr);
        current->next = tempPtN;
        current = tempPtN;
    }
    return head;
}

template <class value_type>
std::pair<node<value_type>*, unsigned int> list_ring_get(std::initializer_list<value_type> _init_list) {
    node<value_type> *head, *current;
    head = new node<value_type>(*_init_list.begin(), head);
    current = head;
    for (std::initializer_list<int>::iterator i = _init_list.begin() + 1; i != _init_list.end(); ++i) {
        node<value_type> *tempPtN = new node<value_type>(*i, head);
        current->next = tempPtN;
        current = tempPtN;
    }
    return {head, _init_list.size()};
}

template <class list_node>
void output_list(list_node *_node) {
    list_node *begin = _node;
    for (_node; _node && _node != begin; _node++) 
        std::cout << _node.value;
}

} //~list_algo

typedef list_algo::node<int> node_int;
