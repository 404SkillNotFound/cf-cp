#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    if (k == 0)
    {
        if (a[0] == 1)
            cout << -1;
        else
            cout << a[0] - 1;
        return 0;
    }

    int x = a[k - 1];

    if (k < n && a[k] == x)
        cout << -1;
    else
        cout << x;

    return 0;
}