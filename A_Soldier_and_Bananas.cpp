#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k, n, w;
    std::cin >> k >> n >> w;

    int output = {};

    output = (w * (w + 1) / 2) * k - n;
    if (output < 0)
    {
        output = 0;
    }
    std::cout << output << '\n';

    return 0;
}
//  (1+2+3+4)*3
// 1st b = 1*k
// 2nd b = 2*k
// i*k