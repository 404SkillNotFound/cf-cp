#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int max_val = {};
    int max_idx = {};

    int min_val = 101; // max height given = 101
    int min_idx = {};

    for (int i = 0; i < n; i++)
    {
        int height;
        std::cin >> height;

        if (height > max_val)
        {
            max_val = height;
            max_idx = i;
        }
        if (height <= min_val)
        {
            min_val = height;
            min_idx = i;
        }
    }
    int total_swaps = max_idx + (n - 1 - min_idx);

    if (max_idx > min_idx)
    {
        total_swaps = total_swaps - 1;
    }

    std::cout << total_swaps;

    return 0;
}