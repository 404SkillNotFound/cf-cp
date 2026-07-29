#include <bits/stdc++.h>

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    int a, b;
    while (t--)
    {
        int a, b;
        std::cin >> a >> b;

        if (a % b == 0)
        {
            std::cout << 0 << "\n";
        }
        else
        {
            std::cout << (b - a % b) << "\n";
        }
    }

    return 0;
}
// a%b == 0
// a = a+1