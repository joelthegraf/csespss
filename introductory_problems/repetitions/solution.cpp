#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solution
    int m = 0, t = 0;
    string n;
    cin >> n;
    char a = n[0];
    for (char c : n)
    {
        if (c == a)
            t++;
        else
        {
            a = c;
            t = 1;
        }
        if (t > m)
            m = t;
    }
    cout << m;
}
