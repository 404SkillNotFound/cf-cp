#include <bits/stdc++.h>

int binarySearch(std::vector<int> arr, int target)
{
    int left = {};
    int right = arr.size();

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (target == arr[mid])
        {
            return target;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t; 

    while (t--)
    {
        int x, y, a, b;
        std::cin >> x >> y >> a >> b; 
        if ((y - x) % (a + b) == 0)
        {
            std::cout << (y - x) / (a + b) << "\n";
        }
        else
        {
            std::cout << -1 << "\n";
        }
    }

    return 0;
}