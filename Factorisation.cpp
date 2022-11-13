#include <bits/extc++.h>
#define int int64_t

using namespace std;

int32_t main() {
    int a;
    cin >> a;
    for (int i = 2; i * i <= a; i++) {
        while (a % i == 0) {
            cout << i << ' ';
            a /= i;
        }
    }
    if (a != 1) {
        cout << a;
    }
}
