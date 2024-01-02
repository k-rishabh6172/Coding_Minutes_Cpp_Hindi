#include <bits/stdc++.h>

using namespace std;

class Enemy {
public:
    string name;
    int power;

    Enemy(string name, int power) : name(name), power(power) {}

    void fire() {
        cout << name << " fires with power " << power << "!" << endl;
    }
};

int mainFn() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string enemyName;
        int enemyPower;
        cin >> enemyName >> enemyPower;

        Enemy enemy(enemyName, enemyPower);
        enemy.fire();
    }

    return 0;
}
