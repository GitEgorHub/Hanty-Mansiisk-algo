#include <bits/extc++.h>
#define int int64_t

using namespace std;

int32_t main() {
    int a;
    cin >> a;
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            cout << i << ' ';
            if (i * i != a) {
                cout << a / i << ' ';
            }
            cout << '\n';
        }
    }
}
