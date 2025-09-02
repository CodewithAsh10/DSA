#include<bits/stdc++.h>
using namespace std;

void STL_priority_queue() { 

    // max-heap by default
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10
    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size swap empty same as others

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5); // {5}
    min_pq.push(2); // {2, 5}
    min_pq.push(8); // {2, 5, 8}
    min_pq.emplace(10); // {2, 5, 8, 10}

    cout << min_pq.top(); // prints 2

    // Push = O(log n)
    // Pop = O(log n)
    // Top = O(1)
    
}

int main() {

    STL_priority_queue();
    return 0;
}