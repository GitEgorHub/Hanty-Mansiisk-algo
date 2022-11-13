#include <bits/extc++.h>
#define int int64_t

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    bool prime[n + 1];
    for (int i = 2; i <= n; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++) {
        for (int j = 2 * i; j <= n; j += i) {
            prime[j] = false;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (prime[i]) {
            cout << i << ' ';
        }
    }
}
