#include <bits/stdc++.h>

using namespace std;

int main()
{
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
