#include<bits/stdc++.h>
using namespace std;

void STL_Map() {

    // Always Sorted and Unique Keys
    map<int, int> m;
    map<int,pair<int,int>> mp; // map of pairs
    map<pair<int,int>,int> mpp; // pair as key

    m[1] = 2; // {1:2}
    m.emplace(3, 1); // {1:2, 3:1}
    m.insert({2, 4}); // {1:2, 2:4, 3:1}
    mpp[{3, 5}] = 10; // {{3,5}:10}

    for (auto it:m) {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m[1]<<endl; // 2
    cout<<m[5]<<endl; // 0 (inserts 5 with value 0)

    auto it = m.find(3); // it points to {3:1}
    cout<<(*it).second<<endl; // 1
     
    auto it = m.lower_bound(2); // it points to {2:4}
    auto it = m.upper_bound(3); // it points to m.end()

}

void STL_Multi_Map() {
    // Everything same as map but allows duplicate keys
    multimap<int, int> mm;
    mm.insert({1, 2}); // {1:2}
}

void STL_Unordered_Map() {
    // same as map but not sorted 
    unordered_map<int, int> um;
    um[1] = 2; // {1:2}
}

int main() {

    STL_Map();
    STL_Multi_Map();
    STL_Unordered_Map();
    return 0;
}