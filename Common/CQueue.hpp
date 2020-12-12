# pragma once

# include <queue>

namespace CQueue {

template <class any>
void init_queue(any) {}

template <class value_type>
value_type pop(std::queue<value_type> &queue) {
    value_type temp = queue.front();
    queue.pop();
    return temp;
}

template <class value_type>
void push(std::queue<value_type> &queue, value_type value) {
    queue.push(value);
}

template <class value_type>
bool empty(std::queue<value_type> &queue) { return queue.empty(); }

}

using namespace CQueue;
using CQueue_int = std::queue<int>;
