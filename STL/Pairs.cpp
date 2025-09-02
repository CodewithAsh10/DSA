#include <bits/stdc++.h>
using namespace std;

void stl_pair() {

    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p1 = {1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;

}

int main() { 

    stl_pair();

    return 0;
}