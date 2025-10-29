#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int revNum = 0;
    cin >> n;
    while (n) {
        int digit = n % 10;
        revNum = revNum * 10 + digit;
        n = n / 10;
    }

    cout << "Reversed Number is: " << revNum << endl;
    return 0;
}