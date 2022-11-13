#include <bits/extc++.h>
#define int int64_t

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int p[n];
    p[0] = a[0];
    for (int i = 1; i < n; i++) {
        p[i] = p[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << p[r] - (l == 0 ? 0 : p[l - 1]) << '\n';
    }
}
