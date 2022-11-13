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
    int s[n];
    s[0] = a[0];
    for (int i = 1; i < n; i++) {
        s[i] = a[i] - a[i - 1];
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r, v;
        cin >> l >> r >> v;
        l--, r--;
        s[l] += v;
        if (r + 1 < n)
            s[r + 1] -= v;
    }
    int val = 0;
    for (int i = 0; i < n; i++) {
        val += s[i];
        cout << val << ' ';
    }
}
