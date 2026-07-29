#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int64 x;
        cin >> n >> x;

        vector<int64> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int64 lo = 1, hi = 2000000000LL;
        int64 ans = 1;

        while (lo <= hi)
        {
            int64 mid = lo + (hi - lo) / 2;

            int64 water = 0;
            bool ok = true;

            for (auto h : a)
            {
                if (h < mid)
                    water += (mid - h);

                if (water > x)
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}