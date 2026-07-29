#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int64 gcdll(int64 a, int64 b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int64 n, x, y;
        cin >> n >> x >> y;

        int64 l = (x / gcdll(x, y)) * y;

        int64 pos = n / x - n / l;
        int64 neg = n / y - n / l;

        int64 posSum = (n + (n - pos + 1)) * pos / 2;
        int64 negSum = neg * (neg + 1) / 2;

        cout << posSum - negSum << '\n';
    }

    return 0;
}