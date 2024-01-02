#include <bits/stdc++.h>
using namespace std;

void mainFn() {
    double percentages[5];
    for(int i=0; i<5; i++) {
        cin >> percentages[i];
    }
    
    cout << fixed << setprecision(2);
    for(int i=0; i<5; i++) {
        cout << percentages[i] << endl;
    }
}
