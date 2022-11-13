#include <bits/extc++.h>
#define int int64_t

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    vector<int> divs[n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divs[j].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (auto j : divs[i]) {
            cout << j << ' ';
        }
        cout << '\n';
    }
}
