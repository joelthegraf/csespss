#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        if (y > x) {
            if (y % 2) {
                y--;
                cout << y * y + x << "\n";
            } else {
                cout << y * y - x + 1 << "\n";
            }
        } else {
            if (x % 2)
                cout << x * x - y + 1 << "\n";
            else {
                x--;
                cout << x * x + y << "\n";
            }
        }
    }
}
