# pragma once

# include <queue>
# include "BinaryTree.hpp"

namespace CQueue {

template <class any>
void init_queue(any) { }

template <class value_type>
value_type queue_pop(std::queue<value_type> &queue) {
    value_type temp = queue.front();
    queue.pop();
    return temp;
}

template <class value_type>
void queue_push(std::queue<value_type> &queue, value_type value) {
    queue.push(value);
}

template <class value_type>
bool queue_empty(std::queue<value_type> &queue) { return queue.empty(); }

template <class value_type>
unsigned int queue_size(std::queue<value_type> &queue) { return queue.size(); }

}

using namespace CQueue;
using CQueue_int = std::queue<int>;
using CQueue_node_int = std::queue<int_tree_node*>;