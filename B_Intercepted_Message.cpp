#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    long long sumA = 0, sumB = 0;
    int ans = 0;

    while (i < n || j < m)
    {
        if (sumA == sumB)
        {
            if (sumA != 0)
                ans++;

            if (i < n)
                sumA += a[i++];

            if (j < m)
                sumB += b[j++];
        }
        else if (sumA < sumB)
        {
            sumA += a[i++];
        }
        else
        {
            sumB += b[j++];
        }
    }

    if (sumA == sumB)
        ans++;

    cout << ans << '\n';
    return 0;
}