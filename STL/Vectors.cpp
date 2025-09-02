#include <bits/stdc++.h>
using namespace std;

void STL_vector() {

    // Vector Declaration
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // Vector of Pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> v1(5, 100); // 5 elements with value 100

    vector<int> v2(5); // 5 elements with default value 0

    vector<int> v3(v1); // copy v1

    // Iterator Example
    vector<int>::iterator it = v1.begin();
    it++;
    cout << *it<<endl;

    // Next after last element mostly garbage
    vector<int>::iterator it2 = v1.end();
    
    // Last Element
    cout<<v.back()<<endl; 

    // Traverse the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    // Using auto keyword
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    // Range-based for loop
    for (auto it : v) {
        cout << it << " ";
    }

    // Deletion
    v.erase(v.begin()+1); 
    v1.erase(v1.begin()+2, v1.begin()+4); 

    // Insertion
    vector<int> v4(2,100); // {100, 100}
    v4.insert(v4.begin(), 300); // {300, 100, 100}
    v.insert(v4.begin()+1,2,10); // {300, 10, 10, 100, 100}

    // Copy Insertion
    vector<int> copy(2,50); // {50, 50}
    v4.insert(v4.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // Size
    cout << v.size() << endl;

    // Pop 
    v.pop_back(); // remove last element

    // Swap
    swap(v4, v); // Now v4 is {300, 10, 10, 100, 100} and v is {50, 50, 300, 10, 10, 100, 100}

    // Clear
    v.clear(); // remove all elements

    // Empty Check
    if (v.empty()) {
        cout << "Vector is empty" << endl;
    }

}

int main() {
    STL_vector();
    return 0;
}
