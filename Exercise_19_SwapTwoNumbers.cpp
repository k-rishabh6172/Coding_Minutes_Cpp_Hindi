#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mainFn() {
    int x, y;
    cin >> x >> y;

    cout << "Original: " << x << " " << y << endl;
    swap(&x, &y);
    cout << "Swapped: " << x << " " << y << endl;
}
