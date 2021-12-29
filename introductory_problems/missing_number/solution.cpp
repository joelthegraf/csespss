#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, m = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m ^= i;
    }
    for (int i = 0; i < (n - 1); i++)
    {
        cin >> p;
        m ^= p;
    }
    cout << m;
}
