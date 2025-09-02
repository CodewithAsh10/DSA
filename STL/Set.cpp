#include<bits/stdc++.h>
using namespace std;

void STL_set() {

    // Always Sorted and Unique
    set<int> s;
    s.insert(1); // {1}
    s.emplace(2); // {1, 2}
    s.insert(2); // {1, 2}
    s.insert(4); // {1, 2, 4}
    s.insert(3); // {1, 2, 3, 4}

    // Lower Bound - points to the first element not less than the key
    auto it4 = s.lower_bound(2); // it4 points to 2
    cout << *it4 << endl; // 2

    // Upper Bound - points to the first element greater than the key
    auto it5 = s.upper_bound(3); // it5 points to 4
    cout << *it5 << endl; // 4

    // begin(), end(), rbegin(), rend()
    // Size, Swap, Empty same as others

    auto it = s.find(3); // it points to 3
    auto it2 = s.find(5); // it2 points to s.end()

    // Erase Takes O(log n)
    s.erase(4); // {1, 2, 3}

    auto it3 = s.find(3); // it3 points to 3
    s.erase(it3); // {1, 2}

    s.erase(it,it2); // {1, 2}

    

    // Count
    int cnt = s.count(3); // counts occurrences but since set only has unique elements, it will be either 0 or 1




}

int main() {

    STL_set();
    return 0;
}