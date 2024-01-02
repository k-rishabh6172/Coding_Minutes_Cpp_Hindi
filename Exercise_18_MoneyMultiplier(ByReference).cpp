#include <bits/stdc++.h>

using namespace std;

void doubleMoney(float &amount) {
    amount *= 2;
}

void mainFn() {
    float money;
    
    cin >> money;

    cout << fixed << setprecision(2);
    cout << "Original Amount: " << money << endl;

    doubleMoney(money);

    cout << "Doubled Amount: " << money << endl;
}
