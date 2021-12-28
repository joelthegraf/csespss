#include <iostream>

int main()
{
    int n, p, m = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m ^= i;
    }
    for (int i = 0; i < (n - 1); i++)
    {
        std::cin >> p;
        m ^= p;
    }
    std::cout << m;
}
