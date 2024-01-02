#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void mainFn() {
    string num;
    cin >> num;
    int carry = 1; // Initialize carry
    for (int i = num.size() - 1; i >= 0 && carry; i--) {
        int digit = num[i] - '0';
        digit++;
        carry = digit / 10;
        digit %= 10;
        num[i] = '0' + digit;
    }
    if (carry)
        num = '1' + num;
    cout << num;
}
