#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int pyramids = 0;

    while (n >= 2)
    {
        int h = 1;
        int cardsNeeded = 0;

        while (true)
        {
            int currentFloorCards = 3 * h - 1;

            if (cardsNeeded + currentFloorCards > n)
            {
                break;
            }
            cardsNeeded += currentFloorCards;
            h++;
        }

        n -= cardsNeeded;
        pyramids++;
    }

    std::cout << pyramids << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}