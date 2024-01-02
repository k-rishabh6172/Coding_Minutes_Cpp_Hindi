#include <bits/stdc++.h>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

void mainFn() {
    char type;
    cin >> type;
    if (type == 's') {
        string s1, s2;
        cin >> s1 >> s2;
        cout << add(s1, s2) << endl;
    } else if (type == 'n') {
        double num1, num2;
        cin >> num1 >> num2;
        cout << add(num1, num2) << endl;
    }
}
