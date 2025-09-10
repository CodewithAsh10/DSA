#include<bits/stdc++.h>
using namespace std;

void STL_multiset() { // Stores duplicate values also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.emplace(1); // {1, 1, 1}

    ms.erase(1); // erases all occurrences of 1, ms = {}

    // Only one occurrence will be erased
    ms.erase(ms.find(1)); // ms = {1, 1}

    // Rest all functions are same as set
}

int main() {

    STL_multiset();
    return 0;
}
