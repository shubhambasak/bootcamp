#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>

void solve() {
    int n;
    cin >> n;

    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    vi ans;
    ans.push_back(v[0]);
    ans.push_back(v[1]);

    for (int i = 2; i < n; i++) {
        int a = ans[ans.size() - 2];
        int b = ans[ans.size() - 1];
        int c = v[i];

        int x = a - b;
        int y = b - c;

        if (x > 0) {
            if (y > 0) {
                ans.back() = c;
            } else if (y < 0) {
                ans.push_back(c);
            }
        } else {
            if (y < 0) {
                ans.back() = c;
            } else if (y > 0) {
                ans.push_back(c);
            }
        }
    }

    int result = ans.size();
    if (ans.size() >= 2 && ans[0] == ans[1]) {
        result--;
    }

    cout << result << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
