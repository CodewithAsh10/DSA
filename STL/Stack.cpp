#include<bits/stdc++.h>
using namespace std;

void STL_stack() { // LIFO

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(4); // {4, 3, 3, 2, 1}

    cout<<st.top(); // prints 4 ** st[2] is invalid ** 
    st.pop(); // {3, 3, 2, 1}

    cout<<st.size(); // prints 4

    cout<<st.empty(); // prints 0 (false)

    stack<int>st2,st3; // declare two more stacks

    st2.swap(st3);
}

int main() {
    
    STL_stack();
    return 0;
}