#include<bits/stdc++.h>
using namespace std;

void STL_list() {

    list<int> l;
    l.push_back(1); // {1}
    l.emplace_back(2); // {1, 2}
    l.push_front(5); // {5, 1, 2}
    l.emplace_front(6); // {6, 5, 1, 2}

    // Rest Functions are similar to vector
    // You can use iterators, size(), empty(), clear(), etc.

}

int main() {
    STL_list();
    return 0;
}