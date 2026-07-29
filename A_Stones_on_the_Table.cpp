#include <bits/stdc++.h>

int main()
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int integer = {};
    std::string color;

    std::cin >> integer >> color;

    int output = {};

    for (int i = 1; i < integer; ++i)
    {

        if (color[i] == color[i - 1])
        {
            output++; 
        }
    }

    std::cout << output << "\n";

    return 0;
}
