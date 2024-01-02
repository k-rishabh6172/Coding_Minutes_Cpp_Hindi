#include <bits/stdc++.h>

using namespace std;

void mainFn() {
    int n; cin >> n;
    vector<pair<int, int>> programmers(n);
    for(int i = 0 ; i < n ; i++){
        cin >> programmers[i].first >> programmers[i].second;
    }

    sort(programmers.begin(), programmers.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first) return a.first > b.first;
        else return a.second < b.second;
    });

    for(auto programmer : programmers) {
        cout << programmer.first << " " << programmer.second << endl;
    }
}
