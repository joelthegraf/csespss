#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (long i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
    for (long i = 1; i <= n; i++)
    {
        if (i % 2)
            cout << i << " ";
    }
}
