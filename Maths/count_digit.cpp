#include <bits/stdc++.h>
using namespace std;

int count(int n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n = n/10;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int digitCount = count(n);
    cout << "Number of digits in " << n << " is: " << digitCount << endl;
    return 0;
}