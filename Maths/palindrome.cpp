#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
        cin >> n;
    int temp = n;
    int revNum = 0;

    while (n > 0) {
        int digit = n % 10;
        revNum = revNum * 10 + digit;
        n = n / 10;
    }

    if (temp == revNum) {
        cout << "Palindrome Number" << endl;
    } 
    else {
        cout << "Not a Palindrome Number" << endl;
    }
    return 0;
}