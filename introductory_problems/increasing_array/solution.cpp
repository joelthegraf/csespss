#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long a[n], c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            long d = a[i - 1] - a[i];
            c += d;
            a[i] += d;
        }
    }
    cout << c;
}
