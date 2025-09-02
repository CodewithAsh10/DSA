#include<bits/stdc++.h>
using namespace std;

void STL_deque() {

    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(5); // {5, 1, 2}
    dq.emplace_front(6); // {6, 5, 1, 2}

    dq.pop_back(); // {6, 5, 1}
    dq.pop_front(); // {5, 1}

    dq.back(); // 1
    dq.front(); // 5

    // Rest Functions are similar to vector
    // You can use iterators, size(), empty(), clear(), etc.

}

int main() {
    STL_deque();
    return 0;
}